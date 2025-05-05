@interface CSJDynamicInteractionSlide3dDecorator : CSJDynamicInteractionAbstractDecorator
@property (nonatomic) CSJSplashUpSwipe3dComponentView slideAnimationView;
@property (nonatomic) CSJDynamicInteractionMaskView maskView;
- (void)hiddenInteractionAnimaiton;
- (void)interactionViewDidShow;
- (void)setSlideAnimationView:;
- (void)showInteractionAnimation;
- (void)showSlideAnimationView;
- (id)slideAnimationView;
- (id)maskView;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)render;
@end
