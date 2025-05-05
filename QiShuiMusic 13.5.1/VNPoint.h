@interface VNPoint : NSObject
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) double x;
@property (nonatomic) double y;
- (id)initWithLocation:;
- (id)init;
- (double)y;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)x;
- (id)location;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)distanceToPoint:;
- (id)initWithX:y:;
- (id)transformedWith:;
+ (BOOL)supportsSecureCoding;
+ (id)zeroPoint;
+ (id)pointByApplyingVector:toPoint:;
+ (double)distanceBetweenPoint:point:;
@end
