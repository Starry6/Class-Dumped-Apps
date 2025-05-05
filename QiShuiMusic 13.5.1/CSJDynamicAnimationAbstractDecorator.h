@interface CSJDynamicAnimationAbstractDecorator : CSJDynamicAbstractDecorator
@property (nonatomic) CSJDynamicAnimationModel animationModel;
- (id)animationModel;
- (id)dynamicAnimation;
- (id)dynamicAnimationLayer;
- (void)setAnimationModel:;
- (void).cxx_destruct;
- (long long)animationStyle;
- (void)render;
+ (id)animationDecoratorWithAnimationModel:;
@end
