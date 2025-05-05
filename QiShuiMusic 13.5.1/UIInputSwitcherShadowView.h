@interface UIInputSwitcherShadowView : UIView
@property (nonatomic) NSInteger mode;
@property (nonatomic) UIKeyboardMenuView menu;
@property (nonatomic) _UIBackdropView blurView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} keyRect;
@property (nonatomic) double pointerOffset;
@property (nonatomic) NSArray gradientColors;
- (id)blurView;
- (void)setBlurView:;
- (void)setMenu:;
- (void)drawRect:;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)menu;
- (id)initWithFrame:;
- (id)gradientColors;
- (void).cxx_destruct;
- (int)mode;
- (void)setMode:;
- (void)setGradientColors:;
- (double)pointerOffset;
- (void)setPointerOffset:;
- (id)keyRect;
- (void)setKeyRect:;
@end
