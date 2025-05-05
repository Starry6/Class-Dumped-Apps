@interface AXMLayoutItem : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) double height;
@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) double width;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedFrame;
- (double)top;
- (double)left;
- (double)height;
- (double)width;
- (double)bottom;
- (double)right;
- (id)description;
- (BOOL)metric:inProximityOfMetric:item:threshold:;
- (long long)_metricTypeForMetric:;
- (double)_floatValueForMetric:;
- (id)_rectValueForMetric:;
+ (id)boundingFrameForItems:;
+ (id)normalizedBoundingFrameForItems:;
+ (id)normalizedBoundingFrameForItem:;
@end
