@interface CSJSplashBottomArrowAnimationView : CSJSplashBottomBaseComponentView
@property (nonatomic) CSJSplashArrowAnimationView arrowAnimationView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithComponentConfiguration:;
- (void)splashControlDestColorAnimation;
- (id)arrowAnimationView;
- (void)bu_animationDidStart:;
- (void)bu_animationDidStop:finished:;
- (void)buildUpView;
- (void)setArrowAnimationView:;
- (id)splashBottomFrameWithContainerFrame:;
- (void)startSplashBottomAnimation;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
