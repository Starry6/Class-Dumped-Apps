@interface SKPhysicsJointSliding : SKPhysicsJoint
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double lowerDistanceLimit;
@property (nonatomic) double upperDistanceLimit;
- (void)setShouldEnableLimits:;
- (void)setUpperDistanceLimit:;
- (void)setLowerDistanceLimit:;
- (BOOL)shouldEnableLimits;
- (double)lowerDistanceLimit;
- (double)upperDistanceLimit;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:bodyB:anchor:axis:;
@end
