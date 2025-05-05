@interface SKSizeConstraint : SKConstraint
@property (nonatomic) SKRange widthRange;
@property (nonatomic) SKRange heightRange;
- (id)initWithCoder:;
- (id)heightRange;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithWidthRange:heightRange:;
- (BOOL)isEqualToSizeConstraint:;
- (id)widthRange;
- (void)setWidthRange:;
- (void)setHeightRange:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithWidthRange:heightRange:;
+ (id)constraintWithWidthRange:;
+ (id)constraintWithHeightRange:;
@end
