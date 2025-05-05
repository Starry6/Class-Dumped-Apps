@interface UIInputSwitcherTableCell : UITableViewCell
@property (nonatomic) UIInputSwitcherTableCellBackgroundView backgroundView;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) BOOL usesStraightLeftEdge;
@property (nonatomic) BOOL first;
@property (nonatomic) BOOL last;
@property (nonatomic) {UIEdgeInsets=dddd} interactiveInsets;
- (id)initWithStyle:reuseIdentifier:;
- (void)setLast:;
- (void)setSelected:animated:;
- (void)layoutSubviews;
- (void)setFirst:;
- (void)updateSelectionWithPoint:;
- (BOOL)usesDarkTheme;
- (void)_updateRoundedCorners;
- (void)setUsesStraightLeftEdge:;
- (void)setUsesDarkTheme:;
- (BOOL)usesStraightLeftEdge;
- (BOOL)isFirst;
- (BOOL)isLast;
- (id)interactiveInsets;
- (void)setInteractiveInsets:;
+ (id)reuseIdentifier;
@end
