// Code generated by cmd/codegen from https://github.com/AllenDang/cimgui-go.
// DO NOT EDIT.

package imgui

// #include <stdlib.h>
// #include <memory.h>
// #include "extra_types.h"
// #include "cimnodes_wrapper.h"
import "C"
import "unsafe"

type EmulateThreeButtonMouse struct {
	CData *C.EmulateThreeButtonMouse
}

func (self *EmulateThreeButtonMouse) handle() (result *C.EmulateThreeButtonMouse, fin func()) {
	return self.CData, func() {}
}

func (self EmulateThreeButtonMouse) c() (C.EmulateThreeButtonMouse, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newEmulateThreeButtonMouseFromC(cvalue *C.EmulateThreeButtonMouse) *EmulateThreeButtonMouse {
	return &EmulateThreeButtonMouse{CData: cvalue}
}

type NodesContext struct {
	CData *C.ImNodesContext
}

func (self *NodesContext) handle() (result *C.ImNodesContext, fin func()) {
	return self.CData, func() {}
}

func newNodesContextFromC(cvalue *C.ImNodesContext) *NodesContext {
	return &NodesContext{CData: cvalue}
}

type NodesEditorContext struct {
	CData *C.ImNodesEditorContext
}

func (self *NodesEditorContext) handle() (result *C.ImNodesEditorContext, fin func()) {
	return self.CData, func() {}
}

func newNodesEditorContextFromC(cvalue *C.ImNodesEditorContext) *NodesEditorContext {
	return &NodesEditorContext{CData: cvalue}
}

type NodesIO struct {
	CData *C.ImNodesIO
}

func (self *NodesIO) handle() (result *C.ImNodesIO, fin func()) {
	return self.CData, func() {}
}

func (self NodesIO) c() (C.ImNodesIO, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newNodesIOFromC(cvalue *C.ImNodesIO) *NodesIO {
	return &NodesIO{CData: cvalue}
}

type NodesMiniMapNodeHoveringCallbackUserData struct {
	Data uintptr
}

func (self *NodesMiniMapNodeHoveringCallbackUserData) handle() (*C.ImNodesMiniMapNodeHoveringCallbackUserData, func()) {
	result, fn := self.c()
	return &result, fn
}

func (selfStruct *NodesMiniMapNodeHoveringCallbackUserData) c() (result C.ImNodesMiniMapNodeHoveringCallbackUserData, fin func()) {
	self := selfStruct.Data

	return (C.ImNodesMiniMapNodeHoveringCallbackUserData)(unsafe.Pointer(self)), func() {}
}

func newNodesMiniMapNodeHoveringCallbackUserDataFromC(cvalue *C.ImNodesMiniMapNodeHoveringCallbackUserData) *NodesMiniMapNodeHoveringCallbackUserData {
	v := (unsafe.Pointer)(*cvalue)
	return &NodesMiniMapNodeHoveringCallbackUserData{Data: uintptr(v)}
}

type NodesStyle struct {
	CData *C.ImNodesStyle
}

func (self *NodesStyle) handle() (result *C.ImNodesStyle, fin func()) {
	return self.CData, func() {}
}

func (self NodesStyle) c() (C.ImNodesStyle, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newNodesStyleFromC(cvalue *C.ImNodesStyle) *NodesStyle {
	return &NodesStyle{CData: cvalue}
}

type LinkDetachWithModifierClick struct {
	CData *C.LinkDetachWithModifierClick
}

func (self *LinkDetachWithModifierClick) handle() (result *C.LinkDetachWithModifierClick, fin func()) {
	return self.CData, func() {}
}

func (self LinkDetachWithModifierClick) c() (C.LinkDetachWithModifierClick, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newLinkDetachWithModifierClickFromC(cvalue *C.LinkDetachWithModifierClick) *LinkDetachWithModifierClick {
	return &LinkDetachWithModifierClick{CData: cvalue}
}

type MultipleSelectModifier struct {
	CData *C.MultipleSelectModifier
}

func (self *MultipleSelectModifier) handle() (result *C.MultipleSelectModifier, fin func()) {
	return self.CData, func() {}
}

func (self MultipleSelectModifier) c() (C.MultipleSelectModifier, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newMultipleSelectModifierFromC(cvalue *C.MultipleSelectModifier) *MultipleSelectModifier {
	return &MultipleSelectModifier{CData: cvalue}
}
