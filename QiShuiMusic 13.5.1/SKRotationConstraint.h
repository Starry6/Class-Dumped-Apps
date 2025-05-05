@interface SKRotationConstraint : SKConstraint
@property (nonatomic) SKRange zRotationRange;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithZRotationRange:;
- (BOOL)isEqualToRotationConstraint:;
- (id)zRotationRange;
- (void)setZRotationRange:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithZRotationRange:;
@end
