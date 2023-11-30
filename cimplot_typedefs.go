// Code generated by cmd/codegen from https://github.com/AllenDang/cimgui-go.
// DO NOT EDIT.

package imgui

// #include <stdlib.h>
// #include <memory.h>
// #include "extra_types.h"
// #include "cimplot_wrapper.h"
import "C"

type FormatterTimeData struct {
	CData *C.Formatter_Time_Data
}

func (self *FormatterTimeData) handle() (result *C.Formatter_Time_Data, fin func()) {
	return self.CData, func() {}
}

func (self FormatterTimeData) c() (C.Formatter_Time_Data, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newFormatterTimeDataFromC(cvalue *C.Formatter_Time_Data) *FormatterTimeData {
	return &FormatterTimeData{CData: cvalue}
}

type PlotAlignmentData struct {
	CData *C.ImPlotAlignmentData
}

func (self *PlotAlignmentData) handle() (result *C.ImPlotAlignmentData, fin func()) {
	return self.CData, func() {}
}

func (self PlotAlignmentData) c() (C.ImPlotAlignmentData, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotAlignmentDataFromC(cvalue *C.ImPlotAlignmentData) *PlotAlignmentData {
	return &PlotAlignmentData{CData: cvalue}
}

type PlotAnnotation struct {
	CData *C.ImPlotAnnotation
}

func (self *PlotAnnotation) handle() (result *C.ImPlotAnnotation, fin func()) {
	return self.CData, func() {}
}

func (self PlotAnnotation) c() (C.ImPlotAnnotation, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotAnnotationFromC(cvalue *C.ImPlotAnnotation) *PlotAnnotation {
	return &PlotAnnotation{CData: cvalue}
}

type PlotAnnotationCollection struct {
	CData *C.ImPlotAnnotationCollection
}

func (self *PlotAnnotationCollection) handle() (result *C.ImPlotAnnotationCollection, fin func()) {
	return self.CData, func() {}
}

func (self PlotAnnotationCollection) c() (C.ImPlotAnnotationCollection, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotAnnotationCollectionFromC(cvalue *C.ImPlotAnnotationCollection) *PlotAnnotationCollection {
	return &PlotAnnotationCollection{CData: cvalue}
}

type PlotAxis struct {
	CData *C.ImPlotAxis
}

func (self *PlotAxis) handle() (result *C.ImPlotAxis, fin func()) {
	return self.CData, func() {}
}

func (self PlotAxis) c() (C.ImPlotAxis, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotAxisFromC(cvalue *C.ImPlotAxis) *PlotAxis {
	return &PlotAxis{CData: cvalue}
}

type PlotAxisColor struct {
	CData *C.ImPlotAxisColor
}

func (self *PlotAxisColor) handle() (result *C.ImPlotAxisColor, fin func()) {
	return self.CData, func() {}
}

func newPlotAxisColorFromC(cvalue *C.ImPlotAxisColor) *PlotAxisColor {
	return &PlotAxisColor{CData: cvalue}
}

type PlotColormapData struct {
	CData *C.ImPlotColormapData
}

func (self *PlotColormapData) handle() (result *C.ImPlotColormapData, fin func()) {
	return self.CData, func() {}
}

func (self PlotColormapData) c() (C.ImPlotColormapData, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotColormapDataFromC(cvalue *C.ImPlotColormapData) *PlotColormapData {
	return &PlotColormapData{CData: cvalue}
}

type PlotContext struct {
	CData *C.ImPlotContext
}

func (self *PlotContext) handle() (result *C.ImPlotContext, fin func()) {
	return self.CData, func() {}
}

func (self PlotContext) c() (C.ImPlotContext, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotContextFromC(cvalue *C.ImPlotContext) *PlotContext {
	return &PlotContext{CData: cvalue}
}

type PlotDateTimeSpec struct {
	CData *C.ImPlotDateTimeSpec
}

func (self *PlotDateTimeSpec) handle() (result *C.ImPlotDateTimeSpec, fin func()) {
	return self.CData, func() {}
}

func (self PlotDateTimeSpec) c() (C.ImPlotDateTimeSpec, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotDateTimeSpecFromC(cvalue *C.ImPlotDateTimeSpec) *PlotDateTimeSpec {
	return &PlotDateTimeSpec{CData: cvalue}
}

type PlotInputMap struct {
	CData *C.ImPlotInputMap
}

func (self *PlotInputMap) handle() (result *C.ImPlotInputMap, fin func()) {
	return self.CData, func() {}
}

func (self PlotInputMap) c() (C.ImPlotInputMap, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotInputMapFromC(cvalue *C.ImPlotInputMap) *PlotInputMap {
	return &PlotInputMap{CData: cvalue}
}

type PlotItem struct {
	CData *C.ImPlotItem
}

func (self *PlotItem) handle() (result *C.ImPlotItem, fin func()) {
	return self.CData, func() {}
}

func (self PlotItem) c() (C.ImPlotItem, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotItemFromC(cvalue *C.ImPlotItem) *PlotItem {
	return &PlotItem{CData: cvalue}
}

type PlotItemGroup struct {
	CData *C.ImPlotItemGroup
}

func (self *PlotItemGroup) handle() (result *C.ImPlotItemGroup, fin func()) {
	return self.CData, func() {}
}

func (self PlotItemGroup) c() (C.ImPlotItemGroup, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotItemGroupFromC(cvalue *C.ImPlotItemGroup) *PlotItemGroup {
	return &PlotItemGroup{CData: cvalue}
}

type PlotLegend struct {
	CData *C.ImPlotLegend
}

func (self *PlotLegend) handle() (result *C.ImPlotLegend, fin func()) {
	return self.CData, func() {}
}

func (self PlotLegend) c() (C.ImPlotLegend, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotLegendFromC(cvalue *C.ImPlotLegend) *PlotLegend {
	return &PlotLegend{CData: cvalue}
}

type PlotNextItemData struct {
	CData *C.ImPlotNextItemData
}

func (self *PlotNextItemData) handle() (result *C.ImPlotNextItemData, fin func()) {
	return self.CData, func() {}
}

func (self PlotNextItemData) c() (C.ImPlotNextItemData, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotNextItemDataFromC(cvalue *C.ImPlotNextItemData) *PlotNextItemData {
	return &PlotNextItemData{CData: cvalue}
}

type PlotNextPlotData struct {
	CData *C.ImPlotNextPlotData
}

func (self *PlotNextPlotData) handle() (result *C.ImPlotNextPlotData, fin func()) {
	return self.CData, func() {}
}

func (self PlotNextPlotData) c() (C.ImPlotNextPlotData, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotNextPlotDataFromC(cvalue *C.ImPlotNextPlotData) *PlotNextPlotData {
	return &PlotNextPlotData{CData: cvalue}
}

type PlotPlot struct {
	CData *C.ImPlotPlot
}

func (self *PlotPlot) handle() (result *C.ImPlotPlot, fin func()) {
	return self.CData, func() {}
}

func (self PlotPlot) c() (C.ImPlotPlot, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotPlotFromC(cvalue *C.ImPlotPlot) *PlotPlot {
	return &PlotPlot{CData: cvalue}
}

type PlotPointError struct {
	CData *C.ImPlotPointError
}

func (self *PlotPointError) handle() (result *C.ImPlotPointError, fin func()) {
	return self.CData, func() {}
}

func (self PlotPointError) c() (C.ImPlotPointError, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotPointErrorFromC(cvalue *C.ImPlotPointError) *PlotPointError {
	return &PlotPointError{CData: cvalue}
}

type PlotRange struct {
	CData *C.ImPlotRange
}

func (self *PlotRange) handle() (result *C.ImPlotRange, fin func()) {
	return self.CData, func() {}
}

func (self PlotRange) c() (C.ImPlotRange, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotRangeFromC(cvalue *C.ImPlotRange) *PlotRange {
	return &PlotRange{CData: cvalue}
}

type PlotRect struct {
	CData *C.ImPlotRect
}

func (self *PlotRect) handle() (result *C.ImPlotRect, fin func()) {
	return self.CData, func() {}
}

func (self PlotRect) c() (C.ImPlotRect, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotRectFromC(cvalue *C.ImPlotRect) *PlotRect {
	return &PlotRect{CData: cvalue}
}

type PlotStyle struct {
	CData *C.ImPlotStyle
}

func (self *PlotStyle) handle() (result *C.ImPlotStyle, fin func()) {
	return self.CData, func() {}
}

func (self PlotStyle) c() (C.ImPlotStyle, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotStyleFromC(cvalue *C.ImPlotStyle) *PlotStyle {
	return &PlotStyle{CData: cvalue}
}

type PlotSubplot struct {
	CData *C.ImPlotSubplot
}

func (self *PlotSubplot) handle() (result *C.ImPlotSubplot, fin func()) {
	return self.CData, func() {}
}

func (self PlotSubplot) c() (C.ImPlotSubplot, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotSubplotFromC(cvalue *C.ImPlotSubplot) *PlotSubplot {
	return &PlotSubplot{CData: cvalue}
}

type PlotTag struct {
	CData *C.ImPlotTag
}

func (self *PlotTag) handle() (result *C.ImPlotTag, fin func()) {
	return self.CData, func() {}
}

func (self PlotTag) c() (C.ImPlotTag, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotTagFromC(cvalue *C.ImPlotTag) *PlotTag {
	return &PlotTag{CData: cvalue}
}

type PlotTagCollection struct {
	CData *C.ImPlotTagCollection
}

func (self *PlotTagCollection) handle() (result *C.ImPlotTagCollection, fin func()) {
	return self.CData, func() {}
}

func (self PlotTagCollection) c() (C.ImPlotTagCollection, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotTagCollectionFromC(cvalue *C.ImPlotTagCollection) *PlotTagCollection {
	return &PlotTagCollection{CData: cvalue}
}

type PlotTick struct {
	CData *C.ImPlotTick
}

func (self *PlotTick) handle() (result *C.ImPlotTick, fin func()) {
	return self.CData, func() {}
}

func (self PlotTick) c() (C.ImPlotTick, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotTickFromC(cvalue *C.ImPlotTick) *PlotTick {
	return &PlotTick{CData: cvalue}
}

type PlotTicker struct {
	CData *C.ImPlotTicker
}

func (self *PlotTicker) handle() (result *C.ImPlotTicker, fin func()) {
	return self.CData, func() {}
}

func (self PlotTicker) c() (C.ImPlotTicker, func()) {
	result, fn := self.handle()
	return *result, fn
}

func newPlotTickerFromC(cvalue *C.ImPlotTicker) *PlotTicker {
	return &PlotTicker{CData: cvalue}
}
