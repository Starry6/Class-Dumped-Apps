@interface AWEConcernYellowDotMaxCountMinIntervalFrequencyConfig : NSObject
@property (nonatomic) q timeWindowInSec;
@property (nonatomic) q maxDisplayCount;
@property (nonatomic) q minDisplayInterval;
- (long long)timeWindowInSec;
- (long long)minDisplayInterval;
- (void)setTimeWindowInSec:;
- (void)setMinDisplayInterval:;
- (long long)maxDisplayCount;
- (void)setMaxDisplayCount:;
@end
