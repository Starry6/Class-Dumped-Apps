@interface CSJSplashRippleAnimationView : UIView
@property (nonatomic) CAGradientLayer rippleGradientLayer;
@property (nonatomic) CAShapeLayer rippleShapeLayer;
@property (nonatomic) CSJAnimationConfiguration animationConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationConfiguration;
- (id)drawPathWithRadius:;
- (id)rippleGradientLayer;
- (id)rippleShapeLayer;
- (void)setAnimationConfiguration:;
- (void)setRippleGradientLayer:;
- (void)setRippleShapeLayer:;
- (void)startRippleAnimation;
- (void)layoutSubviews;
- (void)setup;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
@end
