@interface SKPhysicsJointPin : SKPhysicsJoint
@property (nonatomic) {CGPoint=dd} anchor;
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;
@property (nonatomic) double frictionTorque;
@property (nonatomic) double rotationSpeed;
- (id)anchor;
- (void)setShouldEnableLimits:;
- (void)setUpperAngleLimit:;
- (void)setLowerAngleLimit:;
- (void)setFrictionTorque:;
- (double)frictionTorque;
- (double)rotationSpeed;
- (void)setRotationSpeed:;
- (double)lowerAngleLimit;
- (double)upperAngleLimit;
- (BOOL)shouldEnableLimits;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:anchor:;
@end
