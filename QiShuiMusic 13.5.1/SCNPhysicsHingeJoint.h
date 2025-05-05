@interface SCNPhysicsHingeJoint : SCNPhysicsBehavior
@property (nonatomic) SCNPhysicsBody bodyA;
@property (nonatomic) {SCNVector3=fff} axisA;
@property (nonatomic) {SCNVector3=fff} anchorA;
@property (nonatomic) SCNPhysicsBody bodyB;
@property (nonatomic) {SCNVector3=fff} axisB;
@property (nonatomic) {SCNVector3=fff} anchorB;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)bodyB;
- (id)bodyA;
- (id)initWithBodyA:axisA:anchorA:bodyB:axisB:anchorB:;
- (id)initWithBody:axis:anchor:;
- (id)axisA;
- (void)setAxisA:;
- (id)axisB;
- (void)setAxisB:;
- (id)anchorA;
- (void)setAnchorA:;
- (id)anchorB;
- (void)setAnchorB:;
- (void)_copyDefinition:;
- (void)_addToPhysicsWorld:definition:;
- (void)_willRemoveFromPhysicsWorld:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:axisA:anchorA:bodyB:axisB:anchorB:;
+ (id)jointWithBody:axis:anchor:;
@end
