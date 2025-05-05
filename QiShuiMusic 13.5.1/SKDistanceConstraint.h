@interface SKDistanceConstraint : SKConstraint
@property (nonatomic) SKRange distanceRange;
@property (nonatomic) SKNode node;
@property (nonatomic) {CGPoint=dd} point;
- (id)node;
- (id)point;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPoint:;
- (void)setNode:;
- (id)initWithPoint:inNode:distanceRange:;
- (BOOL)isEqualToDistanceConstraint:;
- (id)distanceRange;
- (void)setDistanceRange:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithNode:distanceRange:;
+ (id)constraintWithPoint:distanceRange:;
+ (id)constraintWithPoint:inNode:distanceRange:;
@end
