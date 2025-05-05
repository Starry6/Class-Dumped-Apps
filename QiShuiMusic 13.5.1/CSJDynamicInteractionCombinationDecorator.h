@interface CSJDynamicInteractionCombinationDecorator : CSJDynamicInteractionAbstractDecorator
@property (nonatomic) CSJDynamicInteractionCombationBottomView bottomView;
@property (nonatomic) CSJSplashUpSwipeComponentView slideAnimationView;
@property (nonatomic) CSJDynamicInteractionMaskView maskView;
@property (nonatomic) CSJAdInfoViewModel adInfoViewModel;
- (id)adInfoViewModel;
- (void)bottomViewAction:;
- (void)hiddenInteractionAnimaiton;
- (void)interactionViewDidShow;
- (id)p_shakeScence;
- (void)setAdInfoViewModel:;
- (void)setSlideAnimationView:;
- (void)showInteractionAnimation;
- (void)showSlideAnimationView;
- (id)slideAnimationView;
- (id)contentView;
- (void)dealloc;
- (id)maskView;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)render;
- (id)bottomView;
- (void)setBottomView:;
@end
