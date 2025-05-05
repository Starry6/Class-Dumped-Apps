@interface CASpringAnimation : CABasicAnimation
@property (nonatomic) double velocity;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double settlingDuration;
- (id)_copyRenderAnimationForLayer:;
- (double)velocity;
- (BOOL)_setCARenderAnimation:layer:;
- (float)_solveForInput:;
- (void)setDamping:;
- (void)setStiffness:;
- (void)setVelocity:;
- (void)setMass:;
- (double)stiffness;
- (double)mass;
- (double)durationForEpsilon:;
- (double)_timeFunction:;
- (double)initialVelocity;
- (double)damping;
- (void)setInitialVelocity:;
- (double)settlingDuration;
- (unsigned int)_propertyFlagsForLayer:;
+ (id)_lp_springWithMass:stiffness:damping:;
+ (id)defaultValueForKey:;
@end
