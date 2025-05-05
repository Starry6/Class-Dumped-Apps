@interface CSJDynamicInteractionClickButtonDecorator : CSJDynamicInteractionAbstractDecorator
@property (nonatomic) CSJDynamicInteractionClickAnimationView interactionClickAnimationView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
- (void)hiddenInteractionAnimaiton;
- (id)interactionClickAnimationView;
- (void)interactionGestureAction:;
- (void)interactionViewDidShow;
- (void)setInteractionClickAnimationView:;
- (void)showInteractionAnimation;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)render;
- (void)setTapGesture:;
@end
