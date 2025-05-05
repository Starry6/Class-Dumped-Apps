@interface SCNDistanceConstraint : SCNConstraint
@property (nonatomic) SCNNode target;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double maximumDistance;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)setMaximumDistance:;
- (void)setTarget:;
- (void)encodeWithCoder:;
- (id)target;
- (void)setMinimumDistance:;
- (double)minimumDistance;
- (double)maximumDistance;
- (id)copyWithZone:;
- (id)targetDirection;
- (void)setTargetDirection:;
- (BOOL)keepTargetDirection;
- (void)setKeepTargetDirection:;
- (void)_customEncodingOfSCNDistanceConstraint:;
- (void)_customDecodingOfSCNDistanceConstraint:;
+ (BOOL)supportsSecureCoding;
+ (id)distanceConstraint;
+ (id)distanceConstraintWithTarget:;
@end
