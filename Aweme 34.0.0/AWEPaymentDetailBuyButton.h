@interface AWEPaymentDetailBuyButton : UIButton
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) BOOL alwaysUseDarkStyle;
@property (nonatomic) UIImage iconImage;
- (void)changeButtonStyleType:;
- (void)setAlwaysUseDarkStyle:;
- (BOOL)alwaysUseDarkStyle;
- (id)iconImage;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setGradientLayer:;
+ (id)buyButton;
@end
