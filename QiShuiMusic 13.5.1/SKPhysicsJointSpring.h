@interface SKPhysicsJointSpring : SKPhysicsJoint
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
- (void)setDamping:;
- (double)frequency;
- (void)setFrequency:;
- (double)damping;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:anchorA:anchorB:;
@end
