@interface UISegmentedControlOutlineStyleProvider : UISegmentedControlDefaultStyleProvider
- (id)fontForControlSize:selected:;
- (BOOL)useSelectionIndicatorStyling;
- (double)defaultContentPaddingWidth;
- (id)fontColorForSegment:enabled:selected:state:;
- (BOOL)animateSelectionSliding;
- (double)defaultHeightForControlSize:;
- (double)defaultTextContentPaddingWidth;
@end
