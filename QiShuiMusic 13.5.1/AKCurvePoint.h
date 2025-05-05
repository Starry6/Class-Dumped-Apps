@interface AKCurvePoint : NSObject
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) {CGPoint=dd} leftTangentPoint;
@property (nonatomic) {CGPoint=dd} rightTangentPoint;
@property (nonatomic) double roundness;
@property (nonatomic) double smoothness;
@property (nonatomic) {CGPoint=dd} CGPoint;
- (void)setX:;
- (void)setY:;
- (double)y;
- (double)x;
- (void)setSmoothness:;
- (double)smoothness;
- (id)initWithX:y:;
- (void)setCGPoint:;
- (id)CGPoint;
- (id)leftTangentPoint;
- (void)setLeftTangentPoint:;
- (id)rightTangentPoint;
- (void)setRightTangentPoint:;
- (double)roundness;
- (void)setRoundness:;
+ (id)pointWithCGPoint:;
+ (id)pointWithX:y:;
@end
