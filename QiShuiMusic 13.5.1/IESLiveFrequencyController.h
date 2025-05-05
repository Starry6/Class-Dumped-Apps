@interface IESLiveFrequencyController : NSObject
@property (nonatomic) NSMutableArray history;
@property (nonatomic) Q maximumTimes;
@property (nonatomic) Q unitTime;
- (unsigned long long)maximumTimes;
- (void)setMaximumTimes:;
- (void)setUnitTime:;
- (unsigned long long)unitTime;
- (id)history;
- (void)setHistory:;
- (void).cxx_destruct;
+ (double)_currentTimestampInSeconds;
+ (long long)_triggerWithMaximumTimes:unitTime:history:;
@end
