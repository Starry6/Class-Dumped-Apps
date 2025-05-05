@interface SKPhysicsJoint : NSObject
@property (nonatomic) BOOL _implicit;
@property (nonatomic) SKPhysicsBody bodyA;
@property (nonatomic) SKPhysicsBody bodyB;
@property (nonatomic) {CGVector=dd} reactionForce;
@property (nonatomic) double reactionTorque;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bodyB;
- (id)bodyA;
- (BOOL)_implicit;
- (void)setBodyA:;
- (void)setBodyB:;
- (id)reactionForce;
- (double)reactionTorque;
- (void)set_implicit:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
@end
