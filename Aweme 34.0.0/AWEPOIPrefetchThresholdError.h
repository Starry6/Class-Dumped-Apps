@interface AWEPOIPrefetchThresholdError : NSObject
@property (nonatomic) q thresholdType;
@property (nonatomic) q overflowTimes;
@property (nonatomic) q limitTimes;
- (long long)limitTimes;
- (void)setLimitTimes:;
- (long long)overflowTimes;
- (void)setOverflowTimes:;
- (void)setThresholdType:;
- (long long)thresholdType;
+ (id)error:overflowCount:limitTimes:;
@end
