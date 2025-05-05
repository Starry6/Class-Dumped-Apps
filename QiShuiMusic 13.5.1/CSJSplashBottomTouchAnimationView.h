@interface CSJSplashBottomTouchAnimationView : CSJSplashBottomBaseComponentView
@property (nonatomic) UIImageView touchHandleImageView;
@property (nonatomic) CSJSplashRippleAnimationView rippleAnimationView;
- (id)initWithComponentConfiguration:;
- (void)splashControlDestColorAnimation;
- (void)buildUpView;
- (id)rippleAnimationView;
- (void)setRippleAnimationView:;
- (void)setTouchHandleImageView:;
- (id)splashBottomFrameWithContainerFrame:;
- (void)startSplashBottomAnimation;
- (id)touchHandleImageView;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
