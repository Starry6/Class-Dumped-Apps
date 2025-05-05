@interface SKOrientationConstraint : SKConstraint
@property (nonatomic) SKNode node;
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) SKRange offset;
- (id)node;
- (void)setOffset:;
- (id)point;
- (id)initWithCoder:;
- (id)offset;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPoint:;
- (void)setNode:;
- (id)initWithNode:point:offset:;
- (BOOL)isEqualToOrientationConstraint:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintOrientingToPoint:inNode:offset:;
+ (id)constraintOrientingToNode:offset:;
+ (id)constraintOrientingToPoint:offset:;
@end
