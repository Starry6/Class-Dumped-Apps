@interface CNVisualIdentityItemEditorSegmentedControl : UISegmentedControl
- (id)initWithItems:;
- (void)setTextAndStyleMode;
- (void)setStyleOnlyMode;
- (void)setTextSegmentEnabled:;
- (void)setStyleSegmentEnabled:;
- (void)selectTextSegment;
- (void)selectStyleSegment;
+ (id)segmentedControlForItemType:;
@end
