@interface PKPhysicsJointWeld : PKPhysicsJoint
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)create;
- (id).cxx_construct;
- (id)_joint;
- (void)set_joint:;
- (id)_jointDef;
- (id)initWithBodyA:bodyB:anchor:;
- (BOOL)isEqualToWeldJoint:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:anchor:;
@end
