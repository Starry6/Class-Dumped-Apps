@interface PKPhysicsJointRope : PKPhysicsJoint
@property (nonatomic) double maxLength;
- (double)maxLength;
- (void)setMaxLength:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)create;
- (id).cxx_construct;
- (id)_joint;
- (void)set_joint:;
- (id)_jointDef;
- (id)initWithBodyA:bodyB:anchorA:anchorB:;
- (BOOL)isEqualToRopeJoint:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:anchorA:anchorB:;
@end
