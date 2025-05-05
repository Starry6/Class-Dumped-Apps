@interface UISegmentedControlTVStyleProvider : UISegmentedControlOutlineStyleProvider
- (double)dividerWidthForControlSize:;
- (id)fontForControlSize:selected:;
- (double)selectionIndicatorOverflowForControlSize:;
- (BOOL)useGeneratedImages;
- (id)fontColorForSegment:enabled:selected:state:;
- (BOOL)useTVStyleFocusSelection;
- (double)cornerRadiusForControlSize:;
- (double)defaultHeightForControlSize:;
+ (id)_tvDefaultTextColorSelected;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
@end
