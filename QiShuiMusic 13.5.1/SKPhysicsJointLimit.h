@interface SKPhysicsJointLimit : SKPhysicsJoint
@property (nonatomic) double maxLength;
- (double)maxLength;
- (void)setMaxLength:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:anchorA:anchorB:;
@end
