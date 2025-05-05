@interface BSSpringAnimationSettings : BSAnimationSettings
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double epsilon;
@property (nonatomic) double initialVelocity;
- (id)init;
+ (id)settingsWithMass:stiffness:damping:;
+ (id)settingsWithMass:stiffness:damping:epsilon:;
+ (id)settingsWithMass:stiffness:damping:epsilon:initialVelocity:;
+ (id)settingsWithMass:stiffness:damping:timingFunction:;
+ (id)settingsWithMass:stiffness:damping:epsilon:timingFunction:;
+ (id)settingsWithMass:stiffness:damping:epsilon:delay:timingFunction:;
@end
