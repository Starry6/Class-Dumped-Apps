@interface AWEIMOtherStatusContactAvatarCollectionViewCell : AWEIMSkylightBaseCollectionViewCell
@property (nonatomic) UIView dotView;
@property (nonatomic) UIView indicativeView;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)__indicatorBorderColor;
- (void)createComponents;
- (void)iesim_themeReload;
- (id)indicativeView;
- (id)p_gradientLayerWithFrame:;
- (void)renderWithModel:;
- (void)setIndicativeView:;
- (void)updateUserInfo;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setGradientLayer:;
- (id)dotView;
- (void)setDotView:;
- (id)statusLabel;
- (void)setStatusLabel:;
- (void)layoutComponents;
@end
