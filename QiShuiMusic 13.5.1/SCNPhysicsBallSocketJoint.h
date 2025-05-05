@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior
@property (nonatomic) SCNPhysicsBody bodyA;
@property (nonatomic) {SCNVector3=fff} anchorA;
@property (nonatomic) SCNPhysicsBody bodyB;
@property (nonatomic) {SCNVector3=fff} anchorB;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)bodyB;
- (id)bodyA;
- (id)anchorA;
- (void)setAnchorA:;
- (id)anchorB;
- (void)setAnchorB:;
- (void)_copyDefinition:;
- (void)_addToPhysicsWorld:definition:;
- (void)_willRemoveFromPhysicsWorld:;
- (id)initWithBodyA:anchorA:bodyB:anchorB:;
- (id)initWithBody:anchor:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:anchorA:bodyB:anchorB:;
+ (id)jointWithBody:anchor:;
@end
