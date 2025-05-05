@interface PKPhysicsJointPrismatic : PKPhysicsJoint
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double lowerDistanceLimit;
@property (nonatomic) double upperDistanceLimit;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)create;
- (id).cxx_construct;
- (void)setShouldEnableLimits:;
- (void)setUpperDistanceLimit:;
- (void)setLowerDistanceLimit:;
- (id)_joint;
- (BOOL)shouldEnableLimits;
- (double)lowerDistanceLimit;
- (double)upperDistanceLimit;
- (void)set_joint:;
- (id)_jointDef;
- (id)initWithBodyA:bodyB:anchor:axis:;
- (BOOL)isEqualToPrismaticJoint:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:anchor:axis:;
@end
