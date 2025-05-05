@interface LOTPointInterpolatorCallback : NSObject
@property (nonatomic) {CGPoint=dd} fromPoint;
@property (nonatomic) {CGPoint=dd} toPoint;
@property (nonatomic) double currentProgress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pointForFrame:startKeyframe:endKeyframe:interpolatedProgress:startPoint:endPoint:currentPoint:;
- (void)setFromPoint:;
- (id)fromPoint;
- (double)currentProgress;
- (id)toPoint;
- (void)setCurrentProgress:;
- (void)setToPoint:;
+ (id)withFromPoint:toPoint:;
@end
