@interface CSJDynamicInteractionAbstractDecorator : CSJDynamicAbstractDecorator
@property (nonatomic) BOOL didVisiable;
@property (nonatomic) BUTimer showTimer;
@property (nonatomic) BUTimer hiddenTimer;
@property (nonatomic) CSJDynamicBrickValuesModel interactionInfo;
- (void)setDidVisiable:;
- (void)setHiddenTimer:;
- (BOOL)didVisiable;
- (void)hiddenInteractionAnimaiton;
- (id)hiddenTimer;
- (void)interactionAnimationTimerSchedule;
- (void)interactionViewDidShow;
- (void)setShowTimer:;
- (void)showInteractionAnimation;
- (void)showInteractionDecorator:;
- (id)contentView;
- (void)dealloc;
- (void).cxx_destruct;
- (id)showTimer;
- (void)didRender;
- (id)interactionInfo;
- (void)setInteractionInfo:;
+ (id)interactionDecoratorWithInfo:;
@end
