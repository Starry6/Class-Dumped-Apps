@interface AWEConcernYellowDotNoClickFrequencyConfig : NSObject
@property (nonatomic) q timeWindowInSec;
@property (nonatomic) q noClickCount;
@property (nonatomic) q exitTimeInSec;
- (long long)timeWindowInSec;
- (long long)noClickCount;
- (long long)exitTimeInSec;
- (void)setTimeWindowInSec:;
- (void)setNoClickCount:;
- (void)setExitTimeInSec:;
@end
