@interface AWESearchLayoutSwitchButton : UIControl
@property (nonatomic) UIImageView iconView;
@property (nonatomic) BOOL isShowDoubleColumnIcon;
@property (nonatomic) q doubleColumnMode;
- (void)configUI;
- (void)showWithAnimation:;
- (long long)doubleColumnMode;
- (void)setDoubleColumnMode:;
- (void)disappearWithAnimation:;
- (BOOL)isShowDoubleColumnIcon;
- (void)setIsShowDoubleColumnIcon:;
- (void)configIconViewWithOffset:;
- (void)showSwitchDoubleColumnIcon;
- (void)configLayoutSwitchButtonWithTheme:;
- (id)accessibilityLabel;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
+ (double)buttonWidth;
@end
