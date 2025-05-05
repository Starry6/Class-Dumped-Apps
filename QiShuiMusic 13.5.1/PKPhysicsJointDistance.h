@interface PKPhysicsJointDistance : PKPhysicsJoint
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double length;
@property (nonatomic) BOOL collideConnected;
- (void)setDamping:;
- (double)frequency;
- (void)setFrequency:;
- (id)initWithCoder:;
- (double)damping;
- (void)encodeWithCoder:;
- (double)length;
- (void)setLength:;
- (void)create;
- (id).cxx_construct;
- (void)setCollideConnected:;
- (id)_joint;
- (void)set_joint:;
- (id)_jointDef;
- (id)initWithBodyA:bodyB:anchorA:anchorB:;
- (id)initWithBodyA:bodyB:localAnchorA:localAnchorB:;
- (BOOL)isEqualToDistanceJoint:;
- (BOOL)collideConnected;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:localAnchorA:localAnchorB:;
+ (id)jointWithBodyA:bodyB:anchorA:anchorB:;
@end
