@interface SKPositionConstraint : SKConstraint
@property (nonatomic) SKRange xRange;
@property (nonatomic) SKRange yRange;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithXRange:YRange:;
- (id)xRange;
- (void)setXRange:;
- (id)yRange;
- (void)setYRange:;
- (BOOL)isEqualToPositionConstraint:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithXRange:YRange:;
+ (id)constraintWithXRange:;
+ (id)constraintWithYRange:;
@end
