@interface CSJDynamicInteractionShake2_3Decorator : CSJDynamicInteractionAbstractDecorator
@property (nonatomic) CSJSplashShakeComponentView shakeAnimationMask;
@property (nonatomic) CSJDynamicClickInfo clickInfo;
@property (nonatomic) BOOL shakeAnimationValid;
@property (nonatomic) CSJAdInfoViewModel infoViewModel;
- (id)clickInfo;
- (void)hiddenInteractionAnimaiton;
- (id)infoViewModel;
- (void)interactionGestureAction:;
- (void)interactionViewDidShow;
- (void)p_acceleroMotionAction;
- (void)setClickInfo:;
- (void)setInfoViewModel:;
- (void)setShakeAnimationMask:;
- (void)setShakeAnimationValid:;
- (id)shakeAnimationMask;
- (BOOL)shakeAnimationValid;
- (void)shakeTriggerWithKey:;
- (void)showInteractionAnimation;
- (void)showShakeAnimation;
- (id)contentView;
- (void)dealloc;
- (void).cxx_destruct;
- (void)render;
@end
