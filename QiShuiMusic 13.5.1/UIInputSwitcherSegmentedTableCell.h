@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell
@property (nonatomic) UIInputSwitcherSegmentControl segmentControl;
- (id)initWithStyle:reuseIdentifier:;
- (void)setSelected:animated:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateSelectionWithPoint:;
- (void)setUsesDarkTheme:;
- (id)segmentControl;
+ (id)preferredSizeWithSegmentCount:;
@end
