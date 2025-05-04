@interface AWEHotSpotBlurView : UIView
@property (nonatomic) q direction;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIColor startColor;
@property (nonatomic) UIColor endColor;
- (id)initWithDirection:StartColor:endColor:;
- (long long)direction;
- (void)setDirection:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupUI;
- (id)endColor;
- (void)setEndColor:;
- (void)setStartColor:;
- (id)startColor;
@end
