@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior
@property (nonatomic) SCNPhysicsBody bodyA;
@property (nonatomic) {SCNMatrix4=ffffffffffffffff} frameA;
@property (nonatomic) SCNPhysicsBody bodyB;
@property (nonatomic) {SCNMatrix4=ffffffffffffffff} frameB;
@property (nonatomic) double maximumAngularLimit1;
@property (nonatomic) double maximumAngularLimit2;
@property (nonatomic) double maximumTwistAngle;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)bodyB;
- (id)bodyA;
- (void)setMaximumTwistAngle:;
- (void)setMaximumAngularLimit2:;
- (void)setMaximumAngularLimit1:;
- (void)_copyDefinition:;
- (void)_addToPhysicsWorld:definition:;
- (void)_willRemoveFromPhysicsWorld:;
- (id)initWithBodyA:frameA:bodyB:frameB:;
- (id)initWithBody:frame:;
- (id)frameA;
- (void)setFrameA:;
- (id)frameB;
- (void)setFrameB:;
- (double)maximumAngularLimit1;
- (double)maximumAngularLimit2;
- (double)maximumTwistAngle;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:frameA:bodyB:frameB:;
+ (id)jointWithBody:frame:;
@end
