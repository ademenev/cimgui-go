package main

import (
	"flag"
	"fmt"
	"log"
	"os"
)

const (
	generatorInfo   = "// Code generated by cmd/codegen from https://github.com/AllenDang/cimgui-go.\n// DO NOT EDIT.\n\n"
	goPackageHeader = generatorInfo + "package imgui\n\n"
	cppFileHeader   = generatorInfo
)

func getEnumAndStructNames(enumJsonBytes []byte) (enumNames []GoIdentifier, structNames []CIdentifier, err error) {
	enums, err := getEnumDefs(enumJsonBytes)
	if err != nil {
		return nil, nil, fmt.Errorf("cannot get enum definitions: %w", err)
	}

	structs, err := getStructDefs(enumJsonBytes)
	if err != nil {
		return nil, nil, fmt.Errorf("cannot get struct definitions: %w", err)
	}

	for _, e := range enums {
		enumNames = append(enumNames, e.Name.renameEnum())
	}

	for _, s := range structs {
		if !shouldSkipStruct(s.Name) {
			structNames = append(structNames, s.Name)
		}
	}

	return
}

func main() {
	defJsonPath := flag.String("d", "", "definitions json file path")
	enumsJsonpath := flag.String("e", "", "structs and enums json file path")
	typedefsJsonpath := flag.String("t", "", "typedefs dict json file path")
	refEnumsJsonPath := flag.String("r", "", "reference structs and enums json file path")
	refTypedefsJsonPath := flag.String("rt", "", "reference typedefs_dict.json file path")
	prefix := flag.String("p", "", "prefix for the generated file")
	include := flag.String("i", "", "include header file")

	parse()

	flag.Parse()

	stat, err := os.Stat(*defJsonPath)
	if err != nil || stat.IsDir() {
		log.Panic("Invalid definitions json file path")
	}

	stat, err = os.Stat(*enumsJsonpath)
	if err != nil || stat.IsDir() {
		log.Panic("Invalid enum json file path")
	}

	defJsonBytes, err := os.ReadFile(*defJsonPath)
	if err != nil {
		log.Panic(err)
	}

	typedefsJsonBytes, err := os.ReadFile(*typedefsJsonpath)
	if err != nil {
		log.Panic(err)
	}

	enumJsonBytes, err := os.ReadFile(*enumsJsonpath)
	if err != nil {
		log.Panic(err)
	}

	var refEnumJsonBytes []byte
	if len(*refEnumsJsonPath) > 0 {
		refEnumJsonBytes, err = os.ReadFile(*refEnumsJsonPath)
		if err != nil {
			log.Panic(err)
		}
	}

	var refTypedefsJsonBytes []byte
	if len(*refTypedefsJsonPath) > 0 {
		refTypedefsJsonBytes, err = os.ReadFile(*refTypedefsJsonPath)
		if err != nil {
			log.Panic(err)
		}
	}

	// get definitions from json file
	funcs, err := getFunDefs(defJsonBytes)
	if err != nil {
		log.Panic(err.Error())
	}

	enums, err := getEnumDefs(enumJsonBytes)
	if err != nil {
		log.Panic(err.Error())
	}

	typedefs, err := getTypedefs(typedefsJsonBytes)
	if err != nil {
		log.Panic(err.Error())
	}

	structs, err := getStructDefs(enumJsonBytes)
	if err != nil {
		log.Panic(err.Error())
	}

	validFuncs, err := generateCppWrapper(*prefix, *include, funcs)
	if err != nil {
		log.Panic(err)
	}

	var es, ss = make([]GoIdentifier, 0), make([]CIdentifier, 0)
	// generate reference only enum and struct names
	if len(refEnumJsonBytes) > 0 {
		es, ss, err = getEnumAndStructNames(refEnumJsonBytes)
		if err != nil {
			log.Panic(err)
		}
	}

	var refTypedefs = make(map[CIdentifier]string)
	if len(refTypedefsJsonBytes) > 0 {
		typedefs, err := getTypedefs(refTypedefsJsonBytes)
		if err != nil {
			log.Panic(err)
		}

		refTypedefs = typedefs.data
	}

	callbacks, err := proceedTypedefs(*prefix, typedefs, structs, enums, refTypedefs)

	// generate code
	enumNames := generateGoEnums(*prefix, enums)
	//structNames := generateGoStructs(*prefix, structs, enums, es, ss, refTypedefs)
	structNames := make([]CIdentifier, 0)

	structAccessorFuncs, err := generateCppStructsAccessor(*prefix, validFuncs, structs)
	if err != nil {
		log.Panic(err)
	}

	validFuncs = append(validFuncs, structAccessorFuncs...)

	if len(refEnumJsonBytes) > 0 {
		enumNames = append(enumNames, es...)
		structNames = append(structNames, ss...)
	}

	structNames = append(structNames, callbacks...)

	if err := generateGoFuncs(*prefix, validFuncs, enumNames, structNames, refTypedefs); err != nil {
		log.Panic(err)
	}
}
