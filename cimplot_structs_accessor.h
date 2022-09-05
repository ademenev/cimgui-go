#pragma once

#include "cimplot_wrapper.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void ImPlotNextItemData_SetLineWeight(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetLineWeight(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetMarker(ImPlotNextItemData *ImPlotNextItemDataPtr, ImPlotMarker v);
extern ImPlotMarker ImPlotNextItemData_GetMarker(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetMarkerSize(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetMarkerSize(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetMarkerWeight(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetMarkerWeight(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetFillAlpha(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetFillAlpha(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetErrorBarSize(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetErrorBarSize(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetErrorBarWeight(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetErrorBarWeight(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetDigitalBitHeight(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetDigitalBitHeight(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetDigitalBitGap(ImPlotNextItemData *ImPlotNextItemDataPtr, float v);
extern float ImPlotNextItemData_GetDigitalBitGap(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetRenderLine(ImPlotNextItemData *ImPlotNextItemDataPtr, bool v);
extern bool ImPlotNextItemData_GetRenderLine(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetRenderFill(ImPlotNextItemData *ImPlotNextItemDataPtr, bool v);
extern bool ImPlotNextItemData_GetRenderFill(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetRenderMarkerLine(ImPlotNextItemData *ImPlotNextItemDataPtr, bool v);
extern bool ImPlotNextItemData_GetRenderMarkerLine(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetRenderMarkerFill(ImPlotNextItemData *ImPlotNextItemDataPtr, bool v);
extern bool ImPlotNextItemData_GetRenderMarkerFill(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetHasHidden(ImPlotNextItemData *ImPlotNextItemDataPtr, bool v);
extern bool ImPlotNextItemData_GetHasHidden(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetHidden(ImPlotNextItemData *ImPlotNextItemDataPtr, bool v);
extern bool ImPlotNextItemData_GetHidden(ImPlotNextItemData *self);
extern void ImPlotNextItemData_SetHiddenCond(ImPlotNextItemData *ImPlotNextItemDataPtr, ImPlotCond v);
extern ImPlotCond ImPlotNextItemData_GetHiddenCond(ImPlotNextItemData *self);
extern void ImPlotRange_SetMin(ImPlotRange *ImPlotRangePtr, double v);
extern double ImPlotRange_GetMin(ImPlotRange *self);
extern void ImPlotRange_SetMax(ImPlotRange *ImPlotRangePtr, double v);
extern double ImPlotRange_GetMax(ImPlotRange *self);
extern void ImPlotStyle_SetLineWeight(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetLineWeight(ImPlotStyle *self);
extern void ImPlotStyle_SetMarker(ImPlotStyle *ImPlotStylePtr, int v);
extern int ImPlotStyle_GetMarker(ImPlotStyle *self);
extern void ImPlotStyle_SetMarkerSize(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetMarkerSize(ImPlotStyle *self);
extern void ImPlotStyle_SetMarkerWeight(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetMarkerWeight(ImPlotStyle *self);
extern void ImPlotStyle_SetFillAlpha(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetFillAlpha(ImPlotStyle *self);
extern void ImPlotStyle_SetErrorBarSize(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetErrorBarSize(ImPlotStyle *self);
extern void ImPlotStyle_SetErrorBarWeight(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetErrorBarWeight(ImPlotStyle *self);
extern void ImPlotStyle_SetDigitalBitHeight(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetDigitalBitHeight(ImPlotStyle *self);
extern void ImPlotStyle_SetDigitalBitGap(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetDigitalBitGap(ImPlotStyle *self);
extern void ImPlotStyle_SetPlotBorderSize(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetPlotBorderSize(ImPlotStyle *self);
extern void ImPlotStyle_SetMinorAlpha(ImPlotStyle *ImPlotStylePtr, float v);
extern float ImPlotStyle_GetMinorAlpha(ImPlotStyle *self);
extern void ImPlotStyle_SetMajorTickLen(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetMajorTickLen(ImPlotStyle *self);
extern void ImPlotStyle_SetMinorTickLen(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetMinorTickLen(ImPlotStyle *self);
extern void ImPlotStyle_SetMajorTickSize(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetMajorTickSize(ImPlotStyle *self);
extern void ImPlotStyle_SetMinorTickSize(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetMinorTickSize(ImPlotStyle *self);
extern void ImPlotStyle_SetMajorGridSize(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetMajorGridSize(ImPlotStyle *self);
extern void ImPlotStyle_SetMinorGridSize(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetMinorGridSize(ImPlotStyle *self);
extern void ImPlotStyle_SetPlotPadding(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetPlotPadding(ImPlotStyle *self);
extern void ImPlotStyle_SetLabelPadding(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetLabelPadding(ImPlotStyle *self);
extern void ImPlotStyle_SetLegendPadding(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetLegendPadding(ImPlotStyle *self);
extern void ImPlotStyle_SetLegendInnerPadding(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetLegendInnerPadding(ImPlotStyle *self);
extern void ImPlotStyle_SetLegendSpacing(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetLegendSpacing(ImPlotStyle *self);
extern void ImPlotStyle_SetMousePosPadding(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetMousePosPadding(ImPlotStyle *self);
extern void ImPlotStyle_SetAnnotationPadding(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetAnnotationPadding(ImPlotStyle *self);
extern void ImPlotStyle_SetFitPadding(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetFitPadding(ImPlotStyle *self);
extern void ImPlotStyle_SetPlotDefaultSize(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetPlotDefaultSize(ImPlotStyle *self);
extern void ImPlotStyle_SetPlotMinSize(ImPlotStyle *ImPlotStylePtr, ImVec2 v);
extern ImVec2 ImPlotStyle_GetPlotMinSize(ImPlotStyle *self);
extern void ImPlotStyle_SetColormap(ImPlotStyle *ImPlotStylePtr, ImPlotColormap v);
extern ImPlotColormap ImPlotStyle_GetColormap(ImPlotStyle *self);
extern void ImPlotStyle_SetUseLocalTime(ImPlotStyle *ImPlotStylePtr, bool v);
extern bool ImPlotStyle_GetUseLocalTime(ImPlotStyle *self);
extern void ImPlotStyle_SetUseISO8601(ImPlotStyle *ImPlotStylePtr, bool v);
extern bool ImPlotStyle_GetUseISO8601(ImPlotStyle *self);
extern void ImPlotStyle_SetUse24HourClock(ImPlotStyle *ImPlotStylePtr, bool v);
extern bool ImPlotStyle_GetUse24HourClock(ImPlotStyle *self);
extern void ImPlotTag_SetAxis(ImPlotTag *ImPlotTagPtr, ImAxis v);
extern ImAxis ImPlotTag_GetAxis(ImPlotTag *self);
extern void ImPlotTag_SetValue(ImPlotTag *ImPlotTagPtr, double v);
extern double ImPlotTag_GetValue(ImPlotTag *self);
extern void ImPlotTag_SetColorBg(ImPlotTag *ImPlotTagPtr, ImU32 v);
extern ImU32 ImPlotTag_GetColorBg(ImPlotTag *self);
extern void ImPlotTag_SetColorFg(ImPlotTag *ImPlotTagPtr, ImU32 v);
extern ImU32 ImPlotTag_GetColorFg(ImPlotTag *self);
extern void ImPlotTag_SetTextOffset(ImPlotTag *ImPlotTagPtr, int v);
extern int ImPlotTag_GetTextOffset(ImPlotTag *self);
extern void ImPlotTick_SetPlotPos(ImPlotTick *ImPlotTickPtr, double v);
extern double ImPlotTick_GetPlotPos(ImPlotTick *self);
extern void ImPlotTick_SetPixelPos(ImPlotTick *ImPlotTickPtr, float v);
extern float ImPlotTick_GetPixelPos(ImPlotTick *self);
extern void ImPlotTick_SetLabelSize(ImPlotTick *ImPlotTickPtr, ImVec2 v);
extern ImVec2 ImPlotTick_GetLabelSize(ImPlotTick *self);
extern void ImPlotTick_SetTextOffset(ImPlotTick *ImPlotTickPtr, int v);
extern int ImPlotTick_GetTextOffset(ImPlotTick *self);
extern void ImPlotTick_SetMajor(ImPlotTick *ImPlotTickPtr, bool v);
extern bool ImPlotTick_GetMajor(ImPlotTick *self);
extern void ImPlotTick_SetShowLabel(ImPlotTick *ImPlotTickPtr, bool v);
extern bool ImPlotTick_GetShowLabel(ImPlotTick *self);
extern void ImPlotTick_SetLevel(ImPlotTick *ImPlotTickPtr, int v);
extern int ImPlotTick_GetLevel(ImPlotTick *self);
extern void ImPlotTick_SetIdx(ImPlotTick *ImPlotTickPtr, int v);
extern int ImPlotTick_GetIdx(ImPlotTick *self);
extern void ImPlotColormapData_SetKeyCounts(ImPlotColormapData *ImPlotColormapDataPtr, ImVector_int v);
extern ImVector_int ImPlotColormapData_GetKeyCounts(ImPlotColormapData *self);
extern void ImPlotColormapData_SetKeyOffsets(ImPlotColormapData *ImPlotColormapDataPtr, ImVector_int v);
extern ImVector_int ImPlotColormapData_GetKeyOffsets(ImPlotColormapData *self);
extern void ImPlotColormapData_SetTables(ImPlotColormapData *ImPlotColormapDataPtr, ImVector_ImU32 v);
extern ImVector_ImU32 ImPlotColormapData_GetTables(ImPlotColormapData *self);
extern void ImPlotColormapData_SetTableSizes(ImPlotColormapData *ImPlotColormapDataPtr, ImVector_int v);
extern ImVector_int ImPlotColormapData_GetTableSizes(ImPlotColormapData *self);
extern void ImPlotColormapData_SetTableOffsets(ImPlotColormapData *ImPlotColormapDataPtr, ImVector_int v);
extern ImVector_int ImPlotColormapData_GetTableOffsets(ImPlotColormapData *self);
extern void ImPlotColormapData_SetText(ImPlotColormapData *ImPlotColormapDataPtr, ImGuiTextBuffer v);
extern ImGuiTextBuffer ImPlotColormapData_GetText(ImPlotColormapData *self);
extern void ImPlotColormapData_SetTextOffsets(ImPlotColormapData *ImPlotColormapDataPtr, ImVector_int v);
extern ImVector_int ImPlotColormapData_GetTextOffsets(ImPlotColormapData *self);
extern void ImPlotColormapData_SetQuals(ImPlotColormapData *ImPlotColormapDataPtr, ImVector_bool v);
extern ImVector_bool ImPlotColormapData_GetQuals(ImPlotColormapData *self);
extern void ImPlotColormapData_SetMap(ImPlotColormapData *ImPlotColormapDataPtr, ImGuiStorage v);
extern ImGuiStorage ImPlotColormapData_GetMap(ImPlotColormapData *self);
extern void ImPlotColormapData_SetCount(ImPlotColormapData *ImPlotColormapDataPtr, int v);
extern int ImPlotColormapData_GetCount(ImPlotColormapData *self);
extern void ImPlotDateTimeSpec_SetDate(ImPlotDateTimeSpec *ImPlotDateTimeSpecPtr, ImPlotDateFmt v);
extern ImPlotDateFmt ImPlotDateTimeSpec_GetDate(ImPlotDateTimeSpec *self);
extern void ImPlotDateTimeSpec_SetTime(ImPlotDateTimeSpec *ImPlotDateTimeSpecPtr, ImPlotTimeFmt v);
extern ImPlotTimeFmt ImPlotDateTimeSpec_GetTime(ImPlotDateTimeSpec *self);
extern void ImPlotDateTimeSpec_SetUseISO8601(ImPlotDateTimeSpec *ImPlotDateTimeSpecPtr, bool v);
extern bool ImPlotDateTimeSpec_GetUseISO8601(ImPlotDateTimeSpec *self);
extern void ImPlotDateTimeSpec_SetUse24HourClock(ImPlotDateTimeSpec *ImPlotDateTimeSpecPtr, bool v);
extern bool ImPlotDateTimeSpec_GetUse24HourClock(ImPlotDateTimeSpec *self);
extern void ImPlotItem_SetID(ImPlotItem *ImPlotItemPtr, ImGuiID v);
extern ImGuiID ImPlotItem_GetID(ImPlotItem *self);
extern void ImPlotItem_SetColor(ImPlotItem *ImPlotItemPtr, ImU32 v);
extern ImU32 ImPlotItem_GetColor(ImPlotItem *self);
extern void ImPlotItem_SetLegendHoverRect(ImPlotItem *ImPlotItemPtr, ImRect v);
extern ImRect ImPlotItem_GetLegendHoverRect(ImPlotItem *self);
extern void ImPlotItem_SetNameOffset(ImPlotItem *ImPlotItemPtr, int v);
extern int ImPlotItem_GetNameOffset(ImPlotItem *self);
extern void ImPlotItem_SetShow(ImPlotItem *ImPlotItemPtr, bool v);
extern bool ImPlotItem_GetShow(ImPlotItem *self);
extern void ImPlotItem_SetLegendHovered(ImPlotItem *ImPlotItemPtr, bool v);
extern bool ImPlotItem_GetLegendHovered(ImPlotItem *self);
extern void ImPlotItem_SetSeenThisFrame(ImPlotItem *ImPlotItemPtr, bool v);
extern bool ImPlotItem_GetSeenThisFrame(ImPlotItem *self);
extern void ImPlotLegend_SetFlags(ImPlotLegend *ImPlotLegendPtr, ImPlotLegendFlags v);
extern ImPlotLegendFlags ImPlotLegend_GetFlags(ImPlotLegend *self);
extern void ImPlotLegend_SetPreviousFlags(ImPlotLegend *ImPlotLegendPtr, ImPlotLegendFlags v);
extern ImPlotLegendFlags ImPlotLegend_GetPreviousFlags(ImPlotLegend *self);
extern void ImPlotLegend_SetLocation(ImPlotLegend *ImPlotLegendPtr, ImPlotLocation v);
extern ImPlotLocation ImPlotLegend_GetLocation(ImPlotLegend *self);
extern void ImPlotLegend_SetPreviousLocation(ImPlotLegend *ImPlotLegendPtr, ImPlotLocation v);
extern ImPlotLocation ImPlotLegend_GetPreviousLocation(ImPlotLegend *self);
extern void ImPlotLegend_SetIndices(ImPlotLegend *ImPlotLegendPtr, ImVector_int v);
extern ImVector_int ImPlotLegend_GetIndices(ImPlotLegend *self);
extern void ImPlotLegend_SetLabels(ImPlotLegend *ImPlotLegendPtr, ImGuiTextBuffer v);
extern ImGuiTextBuffer ImPlotLegend_GetLabels(ImPlotLegend *self);
extern void ImPlotLegend_SetRect(ImPlotLegend *ImPlotLegendPtr, ImRect v);
extern ImRect ImPlotLegend_GetRect(ImPlotLegend *self);
extern void ImPlotLegend_SetHovered(ImPlotLegend *ImPlotLegendPtr, bool v);
extern bool ImPlotLegend_GetHovered(ImPlotLegend *self);
extern void ImPlotLegend_SetHeld(ImPlotLegend *ImPlotLegendPtr, bool v);
extern bool ImPlotLegend_GetHeld(ImPlotLegend *self);
extern void ImPlotLegend_SetCanGoInside(ImPlotLegend *ImPlotLegendPtr, bool v);
extern bool ImPlotLegend_GetCanGoInside(ImPlotLegend *self);
extern void ImPlotRect_SetX(ImPlotRect *ImPlotRectPtr, ImPlotRange v);
extern ImPlotRange ImPlotRect_GetX(ImPlotRect *self);
extern void ImPlotRect_SetY(ImPlotRect *ImPlotRectPtr, ImPlotRange v);
extern ImPlotRange ImPlotRect_GetY(ImPlotRect *self);
extern void Formatter_Time_Data_SetTime(Formatter_Time_Data *Formatter_Time_DataPtr, ImPlotTime v);
extern ImPlotTime Formatter_Time_Data_GetTime(Formatter_Time_Data *self);
extern void Formatter_Time_Data_SetSpec(Formatter_Time_Data *Formatter_Time_DataPtr, ImPlotDateTimeSpec v);
extern ImPlotDateTimeSpec Formatter_Time_Data_GetSpec(Formatter_Time_Data *self);
extern void Formatter_Time_Data_SetUserFormatter(Formatter_Time_Data *Formatter_Time_DataPtr, ImPlotFormatter v);
extern ImPlotFormatter Formatter_Time_Data_GetUserFormatter(Formatter_Time_Data *self);
extern void Formatter_Time_Data_SetUserFormatterData(Formatter_Time_Data *Formatter_Time_DataPtr, void* v);
extern void* Formatter_Time_Data_GetUserFormatterData(Formatter_Time_Data *self);
extern void ImPlotAlignmentData_SetVertical(ImPlotAlignmentData *ImPlotAlignmentDataPtr, bool v);
extern bool ImPlotAlignmentData_GetVertical(ImPlotAlignmentData *self);
extern void ImPlotAlignmentData_SetPadA(ImPlotAlignmentData *ImPlotAlignmentDataPtr, float v);
extern float ImPlotAlignmentData_GetPadA(ImPlotAlignmentData *self);
extern void ImPlotAlignmentData_SetPadB(ImPlotAlignmentData *ImPlotAlignmentDataPtr, float v);
extern float ImPlotAlignmentData_GetPadB(ImPlotAlignmentData *self);
extern void ImPlotAlignmentData_SetPadAMax(ImPlotAlignmentData *ImPlotAlignmentDataPtr, float v);
extern float ImPlotAlignmentData_GetPadAMax(ImPlotAlignmentData *self);
extern void ImPlotAlignmentData_SetPadBMax(ImPlotAlignmentData *ImPlotAlignmentDataPtr, float v);
extern float ImPlotAlignmentData_GetPadBMax(ImPlotAlignmentData *self);
extern void ImPlotAnnotation_SetPos(ImPlotAnnotation *ImPlotAnnotationPtr, ImVec2 v);
extern ImVec2 ImPlotAnnotation_GetPos(ImPlotAnnotation *self);
extern void ImPlotAnnotation_SetOffset(ImPlotAnnotation *ImPlotAnnotationPtr, ImVec2 v);
extern ImVec2 ImPlotAnnotation_GetOffset(ImPlotAnnotation *self);
extern void ImPlotAnnotation_SetColorBg(ImPlotAnnotation *ImPlotAnnotationPtr, ImU32 v);
extern ImU32 ImPlotAnnotation_GetColorBg(ImPlotAnnotation *self);
extern void ImPlotAnnotation_SetColorFg(ImPlotAnnotation *ImPlotAnnotationPtr, ImU32 v);
extern ImU32 ImPlotAnnotation_GetColorFg(ImPlotAnnotation *self);
extern void ImPlotAnnotation_SetTextOffset(ImPlotAnnotation *ImPlotAnnotationPtr, int v);
extern int ImPlotAnnotation_GetTextOffset(ImPlotAnnotation *self);
extern void ImPlotAnnotation_SetClamp(ImPlotAnnotation *ImPlotAnnotationPtr, bool v);
extern bool ImPlotAnnotation_GetClamp(ImPlotAnnotation *self);
extern void ImPlotPlot_SetID(ImPlotPlot *ImPlotPlotPtr, ImGuiID v);
extern ImGuiID ImPlotPlot_GetID(ImPlotPlot *self);
extern void ImPlotPlot_SetFlags(ImPlotPlot *ImPlotPlotPtr, ImPlotFlags v);
extern ImPlotFlags ImPlotPlot_GetFlags(ImPlotPlot *self);
extern void ImPlotPlot_SetPreviousFlags(ImPlotPlot *ImPlotPlotPtr, ImPlotFlags v);
extern ImPlotFlags ImPlotPlot_GetPreviousFlags(ImPlotPlot *self);
extern void ImPlotPlot_SetMouseTextLocation(ImPlotPlot *ImPlotPlotPtr, ImPlotLocation v);
extern ImPlotLocation ImPlotPlot_GetMouseTextLocation(ImPlotPlot *self);
extern void ImPlotPlot_SetMouseTextFlags(ImPlotPlot *ImPlotPlotPtr, ImPlotMouseTextFlags v);
extern ImPlotMouseTextFlags ImPlotPlot_GetMouseTextFlags(ImPlotPlot *self);
extern void ImPlotPlot_SetTextBuffer(ImPlotPlot *ImPlotPlotPtr, ImGuiTextBuffer v);
extern ImGuiTextBuffer ImPlotPlot_GetTextBuffer(ImPlotPlot *self);
extern void ImPlotPlot_SetItems(ImPlotPlot *ImPlotPlotPtr, ImPlotItemGroup v);
extern ImPlotItemGroup ImPlotPlot_GetItems(ImPlotPlot *self);
extern void ImPlotPlot_SetCurrentX(ImPlotPlot *ImPlotPlotPtr, ImAxis v);
extern ImAxis ImPlotPlot_GetCurrentX(ImPlotPlot *self);
extern void ImPlotPlot_SetCurrentY(ImPlotPlot *ImPlotPlotPtr, ImAxis v);
extern ImAxis ImPlotPlot_GetCurrentY(ImPlotPlot *self);
extern void ImPlotPlot_SetFrameRect(ImPlotPlot *ImPlotPlotPtr, ImRect v);
extern ImRect ImPlotPlot_GetFrameRect(ImPlotPlot *self);
extern void ImPlotPlot_SetCanvasRect(ImPlotPlot *ImPlotPlotPtr, ImRect v);
extern ImRect ImPlotPlot_GetCanvasRect(ImPlotPlot *self);
extern void ImPlotPlot_SetPlotRect(ImPlotPlot *ImPlotPlotPtr, ImRect v);
extern ImRect ImPlotPlot_GetPlotRect(ImPlotPlot *self);
extern void ImPlotPlot_SetAxesRect(ImPlotPlot *ImPlotPlotPtr, ImRect v);
extern ImRect ImPlotPlot_GetAxesRect(ImPlotPlot *self);
extern void ImPlotPlot_SetSelectRect(ImPlotPlot *ImPlotPlotPtr, ImRect v);
extern ImRect ImPlotPlot_GetSelectRect(ImPlotPlot *self);
extern void ImPlotPlot_SetSelectStart(ImPlotPlot *ImPlotPlotPtr, ImVec2 v);
extern ImVec2 ImPlotPlot_GetSelectStart(ImPlotPlot *self);
extern void ImPlotPlot_SetTitleOffset(ImPlotPlot *ImPlotPlotPtr, int v);
extern int ImPlotPlot_GetTitleOffset(ImPlotPlot *self);
extern void ImPlotPlot_SetJustCreated(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetJustCreated(ImPlotPlot *self);
extern void ImPlotPlot_SetInitialized(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetInitialized(ImPlotPlot *self);
extern void ImPlotPlot_SetSetupLocked(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetSetupLocked(ImPlotPlot *self);
extern void ImPlotPlot_SetFitThisFrame(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetFitThisFrame(ImPlotPlot *self);
extern void ImPlotPlot_SetHovered(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetHovered(ImPlotPlot *self);
extern void ImPlotPlot_SetHeld(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetHeld(ImPlotPlot *self);
extern void ImPlotPlot_SetSelecting(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetSelecting(ImPlotPlot *self);
extern void ImPlotPlot_SetSelected(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetSelected(ImPlotPlot *self);
extern void ImPlotPlot_SetContextLocked(ImPlotPlot *ImPlotPlotPtr, bool v);
extern bool ImPlotPlot_GetContextLocked(ImPlotPlot *self);
extern void ImPlotPoint_Setx(ImPlotPoint *ImPlotPointPtr, double v);
extern double ImPlotPoint_Getx(ImPlotPoint *self);
extern void ImPlotPoint_Sety(ImPlotPoint *ImPlotPointPtr, double v);
extern double ImPlotPoint_Gety(ImPlotPoint *self);
extern void ImPlotPointError_SetX(ImPlotPointError *ImPlotPointErrorPtr, double v);
extern double ImPlotPointError_GetX(ImPlotPointError *self);
extern void ImPlotPointError_SetY(ImPlotPointError *ImPlotPointErrorPtr, double v);
extern double ImPlotPointError_GetY(ImPlotPointError *self);
extern void ImPlotPointError_SetNeg(ImPlotPointError *ImPlotPointErrorPtr, double v);
extern double ImPlotPointError_GetNeg(ImPlotPointError *self);
extern void ImPlotPointError_SetPos(ImPlotPointError *ImPlotPointErrorPtr, double v);
extern double ImPlotPointError_GetPos(ImPlotPointError *self);
extern void ImPlotTagCollection_SetTags(ImPlotTagCollection *ImPlotTagCollectionPtr, ImVector_ImPlotTag v);
extern ImVector_ImPlotTag ImPlotTagCollection_GetTags(ImPlotTagCollection *self);
extern void ImPlotTagCollection_SetTextBuffer(ImPlotTagCollection *ImPlotTagCollectionPtr, ImGuiTextBuffer v);
extern ImGuiTextBuffer ImPlotTagCollection_GetTextBuffer(ImPlotTagCollection *self);
extern void ImPlotTagCollection_SetSize(ImPlotTagCollection *ImPlotTagCollectionPtr, int v);
extern int ImPlotTagCollection_GetSize(ImPlotTagCollection *self);
extern void ImPlotTicker_SetTicks(ImPlotTicker *ImPlotTickerPtr, ImVector_ImPlotTick v);
extern ImVector_ImPlotTick ImPlotTicker_GetTicks(ImPlotTicker *self);
extern void ImPlotTicker_SetTextBuffer(ImPlotTicker *ImPlotTickerPtr, ImGuiTextBuffer v);
extern ImGuiTextBuffer ImPlotTicker_GetTextBuffer(ImPlotTicker *self);
extern void ImPlotTicker_SetMaxSize(ImPlotTicker *ImPlotTickerPtr, ImVec2 v);
extern ImVec2 ImPlotTicker_GetMaxSize(ImPlotTicker *self);
extern void ImPlotTicker_SetLateSize(ImPlotTicker *ImPlotTickerPtr, ImVec2 v);
extern ImVec2 ImPlotTicker_GetLateSize(ImPlotTicker *self);
extern void ImPlotTicker_SetLevels(ImPlotTicker *ImPlotTickerPtr, int v);
extern int ImPlotTicker_GetLevels(ImPlotTicker *self);
extern void ImPlotAnnotationCollection_SetAnnotations(ImPlotAnnotationCollection *ImPlotAnnotationCollectionPtr, ImVector_ImPlotAnnotation v);
extern ImVector_ImPlotAnnotation ImPlotAnnotationCollection_GetAnnotations(ImPlotAnnotationCollection *self);
extern void ImPlotAnnotationCollection_SetTextBuffer(ImPlotAnnotationCollection *ImPlotAnnotationCollectionPtr, ImGuiTextBuffer v);
extern ImGuiTextBuffer ImPlotAnnotationCollection_GetTextBuffer(ImPlotAnnotationCollection *self);
extern void ImPlotAnnotationCollection_SetSize(ImPlotAnnotationCollection *ImPlotAnnotationCollectionPtr, int v);
extern int ImPlotAnnotationCollection_GetSize(ImPlotAnnotationCollection *self);
extern void ImPlotItemGroup_SetID(ImPlotItemGroup *ImPlotItemGroupPtr, ImGuiID v);
extern ImGuiID ImPlotItemGroup_GetID(ImPlotItemGroup *self);
extern void ImPlotItemGroup_SetLegend(ImPlotItemGroup *ImPlotItemGroupPtr, ImPlotLegend v);
extern ImPlotLegend ImPlotItemGroup_GetLegend(ImPlotItemGroup *self);
extern void ImPlotItemGroup_SetItemPool(ImPlotItemGroup *ImPlotItemGroupPtr, ImPool_ImPlotItem v);
extern ImPool_ImPlotItem ImPlotItemGroup_GetItemPool(ImPlotItemGroup *self);
extern void ImPlotItemGroup_SetColormapIdx(ImPlotItemGroup *ImPlotItemGroupPtr, int v);
extern int ImPlotItemGroup_GetColormapIdx(ImPlotItemGroup *self);
extern void ImPlotSubplot_SetID(ImPlotSubplot *ImPlotSubplotPtr, ImGuiID v);
extern ImGuiID ImPlotSubplot_GetID(ImPlotSubplot *self);
extern void ImPlotSubplot_SetFlags(ImPlotSubplot *ImPlotSubplotPtr, ImPlotSubplotFlags v);
extern ImPlotSubplotFlags ImPlotSubplot_GetFlags(ImPlotSubplot *self);
extern void ImPlotSubplot_SetPreviousFlags(ImPlotSubplot *ImPlotSubplotPtr, ImPlotSubplotFlags v);
extern ImPlotSubplotFlags ImPlotSubplot_GetPreviousFlags(ImPlotSubplot *self);
extern void ImPlotSubplot_SetItems(ImPlotSubplot *ImPlotSubplotPtr, ImPlotItemGroup v);
extern ImPlotItemGroup ImPlotSubplot_GetItems(ImPlotSubplot *self);
extern void ImPlotSubplot_SetRows(ImPlotSubplot *ImPlotSubplotPtr, int v);
extern int ImPlotSubplot_GetRows(ImPlotSubplot *self);
extern void ImPlotSubplot_SetCols(ImPlotSubplot *ImPlotSubplotPtr, int v);
extern int ImPlotSubplot_GetCols(ImPlotSubplot *self);
extern void ImPlotSubplot_SetCurrentIdx(ImPlotSubplot *ImPlotSubplotPtr, int v);
extern int ImPlotSubplot_GetCurrentIdx(ImPlotSubplot *self);
extern void ImPlotSubplot_SetFrameRect(ImPlotSubplot *ImPlotSubplotPtr, ImRect v);
extern ImRect ImPlotSubplot_GetFrameRect(ImPlotSubplot *self);
extern void ImPlotSubplot_SetGridRect(ImPlotSubplot *ImPlotSubplotPtr, ImRect v);
extern ImRect ImPlotSubplot_GetGridRect(ImPlotSubplot *self);
extern void ImPlotSubplot_SetCellSize(ImPlotSubplot *ImPlotSubplotPtr, ImVec2 v);
extern ImVec2 ImPlotSubplot_GetCellSize(ImPlotSubplot *self);
extern void ImPlotSubplot_SetRowAlignmentData(ImPlotSubplot *ImPlotSubplotPtr, ImVector_ImPlotAlignmentData v);
extern ImVector_ImPlotAlignmentData ImPlotSubplot_GetRowAlignmentData(ImPlotSubplot *self);
extern void ImPlotSubplot_SetColAlignmentData(ImPlotSubplot *ImPlotSubplotPtr, ImVector_ImPlotAlignmentData v);
extern ImVector_ImPlotAlignmentData ImPlotSubplot_GetColAlignmentData(ImPlotSubplot *self);
extern void ImPlotSubplot_SetRowRatios(ImPlotSubplot *ImPlotSubplotPtr, ImVector_float v);
extern ImVector_float ImPlotSubplot_GetRowRatios(ImPlotSubplot *self);
extern void ImPlotSubplot_SetColRatios(ImPlotSubplot *ImPlotSubplotPtr, ImVector_float v);
extern ImVector_float ImPlotSubplot_GetColRatios(ImPlotSubplot *self);
extern void ImPlotSubplot_SetRowLinkData(ImPlotSubplot *ImPlotSubplotPtr, ImVector_ImPlotRange v);
extern ImVector_ImPlotRange ImPlotSubplot_GetRowLinkData(ImPlotSubplot *self);
extern void ImPlotSubplot_SetColLinkData(ImPlotSubplot *ImPlotSubplotPtr, ImVector_ImPlotRange v);
extern ImVector_ImPlotRange ImPlotSubplot_GetColLinkData(ImPlotSubplot *self);
extern void ImPlotSubplot_SetFrameHovered(ImPlotSubplot *ImPlotSubplotPtr, bool v);
extern bool ImPlotSubplot_GetFrameHovered(ImPlotSubplot *self);
extern void ImPlotSubplot_SetHasTitle(ImPlotSubplot *ImPlotSubplotPtr, bool v);
extern bool ImPlotSubplot_GetHasTitle(ImPlotSubplot *self);
extern void ImPlotTime_SetS(ImPlotTime *ImPlotTimePtr, time_t v);
extern time_t ImPlotTime_GetS(ImPlotTime *self);
extern void ImPlotTime_SetUs(ImPlotTime *ImPlotTimePtr, int v);
extern int ImPlotTime_GetUs(ImPlotTime *self);
extern void ImPlotAxis_SetID(ImPlotAxis *ImPlotAxisPtr, ImGuiID v);
extern ImGuiID ImPlotAxis_GetID(ImPlotAxis *self);
extern void ImPlotAxis_SetFlags(ImPlotAxis *ImPlotAxisPtr, ImPlotAxisFlags v);
extern ImPlotAxisFlags ImPlotAxis_GetFlags(ImPlotAxis *self);
extern void ImPlotAxis_SetPreviousFlags(ImPlotAxis *ImPlotAxisPtr, ImPlotAxisFlags v);
extern ImPlotAxisFlags ImPlotAxis_GetPreviousFlags(ImPlotAxis *self);
extern void ImPlotAxis_SetRange(ImPlotAxis *ImPlotAxisPtr, ImPlotRange v);
extern ImPlotRange ImPlotAxis_GetRange(ImPlotAxis *self);
extern void ImPlotAxis_SetRangeCond(ImPlotAxis *ImPlotAxisPtr, ImPlotCond v);
extern ImPlotCond ImPlotAxis_GetRangeCond(ImPlotAxis *self);
extern void ImPlotAxis_SetScale(ImPlotAxis *ImPlotAxisPtr, ImPlotScale v);
extern ImPlotScale ImPlotAxis_GetScale(ImPlotAxis *self);
extern void ImPlotAxis_SetFitExtents(ImPlotAxis *ImPlotAxisPtr, ImPlotRange v);
extern ImPlotRange ImPlotAxis_GetFitExtents(ImPlotAxis *self);
extern void ImPlotAxis_SetOrthoAxis(ImPlotAxis *ImPlotAxisPtr, ImPlotAxis* v);
extern ImPlotAxis* ImPlotAxis_GetOrthoAxis(ImPlotAxis *self);
extern void ImPlotAxis_SetConstraintRange(ImPlotAxis *ImPlotAxisPtr, ImPlotRange v);
extern ImPlotRange ImPlotAxis_GetConstraintRange(ImPlotAxis *self);
extern void ImPlotAxis_SetConstraintZoom(ImPlotAxis *ImPlotAxisPtr, ImPlotRange v);
extern ImPlotRange ImPlotAxis_GetConstraintZoom(ImPlotAxis *self);
extern void ImPlotAxis_SetTicker(ImPlotAxis *ImPlotAxisPtr, ImPlotTicker v);
extern ImPlotTicker ImPlotAxis_GetTicker(ImPlotAxis *self);
extern void ImPlotAxis_SetFormatter(ImPlotAxis *ImPlotAxisPtr, ImPlotFormatter v);
extern ImPlotFormatter ImPlotAxis_GetFormatter(ImPlotAxis *self);
extern void ImPlotAxis_SetFormatterData(ImPlotAxis *ImPlotAxisPtr, void* v);
extern void* ImPlotAxis_GetFormatterData(ImPlotAxis *self);
extern void ImPlotAxis_SetLocator(ImPlotAxis *ImPlotAxisPtr, ImPlotLocator v);
extern ImPlotLocator ImPlotAxis_GetLocator(ImPlotAxis *self);
extern void ImPlotAxis_SetLinkedMin(ImPlotAxis *ImPlotAxisPtr, double* v);
extern double* ImPlotAxis_GetLinkedMin(ImPlotAxis *self);
extern void ImPlotAxis_SetLinkedMax(ImPlotAxis *ImPlotAxisPtr, double* v);
extern double* ImPlotAxis_GetLinkedMax(ImPlotAxis *self);
extern void ImPlotAxis_SetPickerLevel(ImPlotAxis *ImPlotAxisPtr, int v);
extern int ImPlotAxis_GetPickerLevel(ImPlotAxis *self);
extern void ImPlotAxis_SetPickerTimeMin(ImPlotAxis *ImPlotAxisPtr, ImPlotTime v);
extern ImPlotTime ImPlotAxis_GetPickerTimeMin(ImPlotAxis *self);
extern void ImPlotAxis_SetPickerTimeMax(ImPlotAxis *ImPlotAxisPtr, ImPlotTime v);
extern ImPlotTime ImPlotAxis_GetPickerTimeMax(ImPlotAxis *self);
extern void ImPlotAxis_SetTransformForward(ImPlotAxis *ImPlotAxisPtr, ImPlotTransform v);
extern ImPlotTransform ImPlotAxis_GetTransformForward(ImPlotAxis *self);
extern void ImPlotAxis_SetTransformInverse(ImPlotAxis *ImPlotAxisPtr, ImPlotTransform v);
extern ImPlotTransform ImPlotAxis_GetTransformInverse(ImPlotAxis *self);
extern void ImPlotAxis_SetTransformData(ImPlotAxis *ImPlotAxisPtr, void* v);
extern void* ImPlotAxis_GetTransformData(ImPlotAxis *self);
extern void ImPlotAxis_SetPixelMin(ImPlotAxis *ImPlotAxisPtr, float v);
extern float ImPlotAxis_GetPixelMin(ImPlotAxis *self);
extern void ImPlotAxis_SetPixelMax(ImPlotAxis *ImPlotAxisPtr, float v);
extern float ImPlotAxis_GetPixelMax(ImPlotAxis *self);
extern void ImPlotAxis_SetScaleMin(ImPlotAxis *ImPlotAxisPtr, double v);
extern double ImPlotAxis_GetScaleMin(ImPlotAxis *self);
extern void ImPlotAxis_SetScaleMax(ImPlotAxis *ImPlotAxisPtr, double v);
extern double ImPlotAxis_GetScaleMax(ImPlotAxis *self);
extern void ImPlotAxis_SetScaleToPixel(ImPlotAxis *ImPlotAxisPtr, double v);
extern double ImPlotAxis_GetScaleToPixel(ImPlotAxis *self);
extern void ImPlotAxis_SetDatum1(ImPlotAxis *ImPlotAxisPtr, float v);
extern float ImPlotAxis_GetDatum1(ImPlotAxis *self);
extern void ImPlotAxis_SetDatum2(ImPlotAxis *ImPlotAxisPtr, float v);
extern float ImPlotAxis_GetDatum2(ImPlotAxis *self);
extern void ImPlotAxis_SetHoverRect(ImPlotAxis *ImPlotAxisPtr, ImRect v);
extern ImRect ImPlotAxis_GetHoverRect(ImPlotAxis *self);
extern void ImPlotAxis_SetLabelOffset(ImPlotAxis *ImPlotAxisPtr, int v);
extern int ImPlotAxis_GetLabelOffset(ImPlotAxis *self);
extern void ImPlotAxis_SetColorMaj(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorMaj(ImPlotAxis *self);
extern void ImPlotAxis_SetColorMin(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorMin(ImPlotAxis *self);
extern void ImPlotAxis_SetColorTick(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorTick(ImPlotAxis *self);
extern void ImPlotAxis_SetColorTxt(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorTxt(ImPlotAxis *self);
extern void ImPlotAxis_SetColorBg(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorBg(ImPlotAxis *self);
extern void ImPlotAxis_SetColorHov(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorHov(ImPlotAxis *self);
extern void ImPlotAxis_SetColorAct(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorAct(ImPlotAxis *self);
extern void ImPlotAxis_SetColorHiLi(ImPlotAxis *ImPlotAxisPtr, ImU32 v);
extern ImU32 ImPlotAxis_GetColorHiLi(ImPlotAxis *self);
extern void ImPlotAxis_SetEnabled(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetEnabled(ImPlotAxis *self);
extern void ImPlotAxis_SetVertical(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetVertical(ImPlotAxis *self);
extern void ImPlotAxis_SetFitThisFrame(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetFitThisFrame(ImPlotAxis *self);
extern void ImPlotAxis_SetHasRange(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetHasRange(ImPlotAxis *self);
extern void ImPlotAxis_SetHasFormatSpec(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetHasFormatSpec(ImPlotAxis *self);
extern void ImPlotAxis_SetShowDefaultTicks(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetShowDefaultTicks(ImPlotAxis *self);
extern void ImPlotAxis_SetHovered(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetHovered(ImPlotAxis *self);
extern void ImPlotAxis_SetHeld(ImPlotAxis *ImPlotAxisPtr, bool v);
extern bool ImPlotAxis_GetHeld(ImPlotAxis *self);
extern void ImPlotContext_SetPlots(ImPlotContext *ImPlotContextPtr, ImPool_ImPlotPlot v);
extern ImPool_ImPlotPlot ImPlotContext_GetPlots(ImPlotContext *self);
extern void ImPlotContext_SetSubplots(ImPlotContext *ImPlotContextPtr, ImPool_ImPlotSubplot v);
extern ImPool_ImPlotSubplot ImPlotContext_GetSubplots(ImPlotContext *self);
extern void ImPlotContext_SetCurrentPlot(ImPlotContext *ImPlotContextPtr, ImPlotPlot* v);
extern ImPlotPlot* ImPlotContext_GetCurrentPlot(ImPlotContext *self);
extern void ImPlotContext_SetCurrentSubplot(ImPlotContext *ImPlotContextPtr, ImPlotSubplot* v);
extern ImPlotSubplot* ImPlotContext_GetCurrentSubplot(ImPlotContext *self);
extern void ImPlotContext_SetCurrentItems(ImPlotContext *ImPlotContextPtr, ImPlotItemGroup* v);
extern ImPlotItemGroup* ImPlotContext_GetCurrentItems(ImPlotContext *self);
extern void ImPlotContext_SetCurrentItem(ImPlotContext *ImPlotContextPtr, ImPlotItem* v);
extern ImPlotItem* ImPlotContext_GetCurrentItem(ImPlotContext *self);
extern void ImPlotContext_SetPreviousItem(ImPlotContext *ImPlotContextPtr, ImPlotItem* v);
extern ImPlotItem* ImPlotContext_GetPreviousItem(ImPlotContext *self);
extern void ImPlotContext_SetCTicker(ImPlotContext *ImPlotContextPtr, ImPlotTicker v);
extern ImPlotTicker ImPlotContext_GetCTicker(ImPlotContext *self);
extern void ImPlotContext_SetAnnotations(ImPlotContext *ImPlotContextPtr, ImPlotAnnotationCollection v);
extern ImPlotAnnotationCollection ImPlotContext_GetAnnotations(ImPlotContext *self);
extern void ImPlotContext_SetTags(ImPlotContext *ImPlotContextPtr, ImPlotTagCollection v);
extern ImPlotTagCollection ImPlotContext_GetTags(ImPlotContext *self);
extern void ImPlotContext_SetChildWindowMade(ImPlotContext *ImPlotContextPtr, bool v);
extern bool ImPlotContext_GetChildWindowMade(ImPlotContext *self);
extern void ImPlotContext_SetStyle(ImPlotContext *ImPlotContextPtr, ImPlotStyle v);
extern ImPlotStyle ImPlotContext_GetStyle(ImPlotContext *self);
extern void ImPlotContext_SetColorModifiers(ImPlotContext *ImPlotContextPtr, ImVector_ImGuiColorMod v);
extern ImVector_ImGuiColorMod ImPlotContext_GetColorModifiers(ImPlotContext *self);
extern void ImPlotContext_SetStyleModifiers(ImPlotContext *ImPlotContextPtr, ImVector_ImGuiStyleMod v);
extern ImVector_ImGuiStyleMod ImPlotContext_GetStyleModifiers(ImPlotContext *self);
extern void ImPlotContext_SetColormapData(ImPlotContext *ImPlotContextPtr, ImPlotColormapData v);
extern ImPlotColormapData ImPlotContext_GetColormapData(ImPlotContext *self);
extern void ImPlotContext_SetColormapModifiers(ImPlotContext *ImPlotContextPtr, ImVector_ImPlotColormap v);
extern ImVector_ImPlotColormap ImPlotContext_GetColormapModifiers(ImPlotContext *self);
extern void ImPlotContext_SetTm(ImPlotContext *ImPlotContextPtr, tm v);
extern tm ImPlotContext_GetTm(ImPlotContext *self);
extern void ImPlotContext_SetTempDouble1(ImPlotContext *ImPlotContextPtr, ImVector_double v);
extern ImVector_double ImPlotContext_GetTempDouble1(ImPlotContext *self);
extern void ImPlotContext_SetTempDouble2(ImPlotContext *ImPlotContextPtr, ImVector_double v);
extern ImVector_double ImPlotContext_GetTempDouble2(ImPlotContext *self);
extern void ImPlotContext_SetTempInt1(ImPlotContext *ImPlotContextPtr, ImVector_int v);
extern ImVector_int ImPlotContext_GetTempInt1(ImPlotContext *self);
extern void ImPlotContext_SetDigitalPlotItemCnt(ImPlotContext *ImPlotContextPtr, int v);
extern int ImPlotContext_GetDigitalPlotItemCnt(ImPlotContext *self);
extern void ImPlotContext_SetDigitalPlotOffset(ImPlotContext *ImPlotContextPtr, int v);
extern int ImPlotContext_GetDigitalPlotOffset(ImPlotContext *self);
extern void ImPlotContext_SetNextPlotData(ImPlotContext *ImPlotContextPtr, ImPlotNextPlotData v);
extern ImPlotNextPlotData ImPlotContext_GetNextPlotData(ImPlotContext *self);
extern void ImPlotContext_SetNextItemData(ImPlotContext *ImPlotContextPtr, ImPlotNextItemData v);
extern ImPlotNextItemData ImPlotContext_GetNextItemData(ImPlotContext *self);
extern void ImPlotContext_SetInputMap(ImPlotContext *ImPlotContextPtr, ImPlotInputMap v);
extern ImPlotInputMap ImPlotContext_GetInputMap(ImPlotContext *self);
extern void ImPlotContext_SetOpenContextThisFrame(ImPlotContext *ImPlotContextPtr, bool v);
extern bool ImPlotContext_GetOpenContextThisFrame(ImPlotContext *self);
extern void ImPlotContext_SetMousePosStringBuilder(ImPlotContext *ImPlotContextPtr, ImGuiTextBuffer v);
extern ImGuiTextBuffer ImPlotContext_GetMousePosStringBuilder(ImPlotContext *self);
extern void ImPlotContext_SetAlignmentData(ImPlotContext *ImPlotContextPtr, ImPool_ImPlotAlignmentData v);
extern ImPool_ImPlotAlignmentData ImPlotContext_GetAlignmentData(ImPlotContext *self);
extern void ImPlotContext_SetCurrentAlignmentH(ImPlotContext *ImPlotContextPtr, ImPlotAlignmentData* v);
extern ImPlotAlignmentData* ImPlotContext_GetCurrentAlignmentH(ImPlotContext *self);
extern void ImPlotContext_SetCurrentAlignmentV(ImPlotContext *ImPlotContextPtr, ImPlotAlignmentData* v);
extern ImPlotAlignmentData* ImPlotContext_GetCurrentAlignmentV(ImPlotContext *self);
extern void ImPlotInputMap_SetPan(ImPlotInputMap *ImPlotInputMapPtr, ImGuiMouseButton v);
extern ImGuiMouseButton ImPlotInputMap_GetPan(ImPlotInputMap *self);
extern void ImPlotInputMap_SetPanMod(ImPlotInputMap *ImPlotInputMapPtr, ImGuiModFlags v);
extern ImGuiModFlags ImPlotInputMap_GetPanMod(ImPlotInputMap *self);
extern void ImPlotInputMap_SetFit(ImPlotInputMap *ImPlotInputMapPtr, ImGuiMouseButton v);
extern ImGuiMouseButton ImPlotInputMap_GetFit(ImPlotInputMap *self);
extern void ImPlotInputMap_SetSelect(ImPlotInputMap *ImPlotInputMapPtr, ImGuiMouseButton v);
extern ImGuiMouseButton ImPlotInputMap_GetSelect(ImPlotInputMap *self);
extern void ImPlotInputMap_SetSelectCancel(ImPlotInputMap *ImPlotInputMapPtr, ImGuiMouseButton v);
extern ImGuiMouseButton ImPlotInputMap_GetSelectCancel(ImPlotInputMap *self);
extern void ImPlotInputMap_SetSelectMod(ImPlotInputMap *ImPlotInputMapPtr, ImGuiModFlags v);
extern ImGuiModFlags ImPlotInputMap_GetSelectMod(ImPlotInputMap *self);
extern void ImPlotInputMap_SetSelectHorzMod(ImPlotInputMap *ImPlotInputMapPtr, ImGuiModFlags v);
extern ImGuiModFlags ImPlotInputMap_GetSelectHorzMod(ImPlotInputMap *self);
extern void ImPlotInputMap_SetSelectVertMod(ImPlotInputMap *ImPlotInputMapPtr, ImGuiModFlags v);
extern ImGuiModFlags ImPlotInputMap_GetSelectVertMod(ImPlotInputMap *self);
extern void ImPlotInputMap_SetMenu(ImPlotInputMap *ImPlotInputMapPtr, ImGuiMouseButton v);
extern ImGuiMouseButton ImPlotInputMap_GetMenu(ImPlotInputMap *self);
extern void ImPlotInputMap_SetOverrideMod(ImPlotInputMap *ImPlotInputMapPtr, ImGuiModFlags v);
extern ImGuiModFlags ImPlotInputMap_GetOverrideMod(ImPlotInputMap *self);
extern void ImPlotInputMap_SetZoomMod(ImPlotInputMap *ImPlotInputMapPtr, ImGuiModFlags v);
extern ImGuiModFlags ImPlotInputMap_GetZoomMod(ImPlotInputMap *self);
extern void ImPlotInputMap_SetZoomRate(ImPlotInputMap *ImPlotInputMapPtr, float v);
extern float ImPlotInputMap_GetZoomRate(ImPlotInputMap *self);

#ifdef __cplusplus
}
#endif
