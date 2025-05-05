@interface SCNAccelerationConstraint : SCNConstraint
@property (nonatomic) double maximumLinearAcceleration;
@property (nonatomic) double maximumLinearVelocity;
@property (nonatomic) double decelerationDistance;
@property (nonatomic) double damping;
- (void)setDamping:;
- (id)init;
- (id)initWithCoder:;
- (double)damping;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (double)maximumLinearVelocity;
- (void)setMaximumLinearVelocity:;
- (double)maximumLinearAcceleration;
- (void)setMaximumLinearAcceleration:;
- (void)setDecelerationDistance:;
- (double)decelerationDistance;
+ (BOOL)supportsSecureCoding;
+ (id)accelerationConstraint;
@end
