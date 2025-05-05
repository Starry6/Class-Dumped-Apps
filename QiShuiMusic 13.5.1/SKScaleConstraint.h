@interface SKScaleConstraint : SKConstraint
@property (nonatomic) SKRange xRange;
@property (nonatomic) SKRange yRange;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithXRange:YRange:;
- (BOOL)isEqualToScaleConstraint:;
- (id)xRange;
- (void)setXRange:;
- (id)yRange;
- (void)setYRange:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithXRange:YRange:;
+ (id)constraintWithScaleRange:;
+ (id)constraintWithXRange:;
+ (id)constraintWithYRange:;
@end
