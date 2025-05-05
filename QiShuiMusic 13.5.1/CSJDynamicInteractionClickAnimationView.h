@interface CSJDynamicInteractionClickAnimationView : UIView
@property (nonatomic) UIImageView touchHandleImageView;
@property (nonatomic) CSJSplashRippleAnimationView rippleAnimationView;
@property (nonatomic) CSJAnimationConfiguration animationConfiguration;
@property (nonatomic) {CGSize=dd} interactionViewSize;
@property (nonatomic) double lineWidth;
- (id)animationConfiguration;
- (id)initWithSize:lineWidth:;
- (id)interactionViewSize;
- (id)rippleAnimationView;
- (void)setAnimationConfiguration:;
- (void)setInteractionViewSize:;
- (void)setRippleAnimationView:;
- (void)setTouchHandleImageView:;
- (id)touchHandleImageView;
- (void)setLineWidth:;
- (double)lineWidth;
- (void)layoutSubviews;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setupView;
@end
