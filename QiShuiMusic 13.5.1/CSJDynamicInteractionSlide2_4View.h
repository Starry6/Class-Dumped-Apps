@interface CSJDynamicInteractionSlide2_4View : CSJSplashBottomBaseComponentView
@property (nonatomic) UIImageView touchHandleImageView;
@property (nonatomic) CSJSplashRippleAnimationView rippleAnimationView;
@property (nonatomic) CAGradientLayer gradientTrailLayer;
@property (nonatomic) BOOL isSplash;
@property (nonatomic) CSJLOTAnimationView lotAnimationView;
- (void)_pbu_addTipLabel;
- (void)buildUpViewWith:;
- (id)gradientTrailLayer;
- (id)initWithComponentConfiguration:isSplash:;
- (BOOL)isSplash;
- (id)lotAnimationView;
- (id)rippleAnimationView;
- (void)setGradientTrailLayer:;
- (void)setIsSplash:;
- (void)setLotAnimationView:;
- (void)setRippleAnimationView:;
- (void)setTouchHandleImageView:;
- (void)startSplashBottomAnimation;
- (id)touchHandleImageView;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
