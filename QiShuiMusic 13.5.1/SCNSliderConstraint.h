@interface SCNSliderConstraint : SCNConstraint
@property (nonatomic) Q collisionCategoryBitMask;
@property (nonatomic) double radius;
@property (nonatomic) {SCNVector3=fff} offset;
- (void)setRadius:;
- (void)setOffset:;
- (id)init;
- (double)radius;
- (id)initWithCoder:;
- (id)offset;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (unsigned long long)collisionCategoryBitMask;
- (void)setCollisionCategoryBitMask:;
+ (BOOL)supportsSecureCoding;
+ (id)sliderConstraint;
@end
