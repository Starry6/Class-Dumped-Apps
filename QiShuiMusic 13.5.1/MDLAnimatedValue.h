@interface MDLAnimatedValue : NSObject
@property (nonatomic) Q precision;
@property (nonatomic) Q timeSampleCount;
@property (nonatomic) double minimumTime;
@property (nonatomic) double maximumTime;
@property (nonatomic) Q interpolation;
@property (nonatomic) NSArray keyTimes;
- (id)init;
- (unsigned long long)precision;
- (BOOL)isAnimated;
- (void)clear;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)keyTimes;
- (unsigned long long)interpolation;
- (double)minimumTime;
- (double)maximumTime;
- (id)defaultVtValue;
- (void)resetWithAnimatedValue:;
- (unsigned long long)timeSampleCount;
- (unsigned long long)getTimes:maxCount:;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (void)setInterpolation:;
@end
