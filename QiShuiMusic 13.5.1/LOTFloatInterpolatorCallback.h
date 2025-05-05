@interface LOTFloatInterpolatorCallback : NSObject
@property (nonatomic) double fromFloat;
@property (nonatomic) double toFloat;
@property (nonatomic) double currentProgress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)toFloat;
- (double)floatValueForFrame:startKeyframe:endKeyframe:interpolatedProgress:startValue:endValue:currentValue:;
- (double)fromFloat;
- (void)setFromFloat:;
- (void)setToFloat:;
- (double)currentProgress;
- (void)setCurrentProgress:;
+ (id)withFromFloat:toFloat:;
@end
