@interface SCNTransformConstraint : SCNConstraint
- (id)initWithCoder:;
- (id)copyWithZone:;
- (id)initTransformInWorld:withBlock:;
- (id)initPositionInWorld:withBlock:;
- (id)initOrientationInWorldSpace:withBlock:;
+ (BOOL)supportsSecureCoding;
+ (id)transformConstraintInWorldSpace:withBlock:;
+ (id)positionConstraintInWorldSpace:withBlock:;
+ (id)orientationConstraintInWorldSpace:withBlock:;
@end
