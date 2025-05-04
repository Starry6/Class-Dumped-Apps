@interface AWEIMOtherStatusContactAvatarCollectionViewCell : AWEIMSkylightAvatarCollectionViewCell
@property (nonatomic) UIView dotView;
@property (nonatomic) UIView indicativeView;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)awe_themeReload;
- (double)indicatorHeight;
- (double)indicatorWidth;
- (void)renderWithModel:;
- (void)createComponents;
- (id)indicativeView;
- (id)__indicatorBorderColor;
- (id)p_gradientLayerWithFrame:;
- (BOOL)canShowMomentColorRing;
- (void)renderColorRingViewWithModel:;
- (void)setIndicativeView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (id)dotView;
- (void)setDotView:;
- (void)setGradientLayer:;
- (void)setStatusLabel:;
- (id)statusLabel;
- (void)layoutComponents;
@end
