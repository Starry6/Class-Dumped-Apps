@interface PKPhysicsFieldNoise : PKPhysicsField
@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;
- (id)init;
- (void)setSmoothness:;
- (float)smoothness;
- (void)setAnimationSpeed:;
- (float)animationSpeed;
- (id)initWithField:;
+ (id)field;
@end
