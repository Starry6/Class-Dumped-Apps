@interface UIInputSwitcherTableCellBackgroundView : UIView
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL drawsOpaque;
@property (nonatomic) BOOL drawsBorder;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) Q roundedCorners;
- (void)drawRect:;
- (void)setSelected:;
- (BOOL)isSelected;
- (BOOL)usesDarkTheme;
- (void)setUsesDarkTheme:;
- (BOOL)drawsOpaque;
- (void)setDrawsOpaque:;
- (BOOL)drawsBorder;
- (void)setDrawsBorder:;
- (unsigned long long)roundedCorners;
- (void)setRoundedCorners:;
@end
