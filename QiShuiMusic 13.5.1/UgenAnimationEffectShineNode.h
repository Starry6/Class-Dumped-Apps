@interface UgenAnimationEffectShineNode : UgenAnimationEffectNode
@property (nonatomic) double shineWidth;
@property (nonatomic) double angle;
- (id)animationLayerWithAnimationView:animationInfo:;
- (void)setShineWidth:;
- (double)shineWidth;
- (id)initWithDictionary:;
- (double)angle;
- (void)setAngle:;
@end
