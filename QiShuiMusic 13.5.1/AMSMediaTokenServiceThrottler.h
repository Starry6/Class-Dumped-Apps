@interface AMSMediaTokenServiceThrottler : NSObject
@property (nonatomic) Q attemptNumber;
@property (nonatomic) NSDate throttleDate;
@property (nonatomic) double baseSleepInterval;
@property (nonatomic) double maxSleepInterval;
- (void)throttle;
- (void)setAttemptNumber:;
- (unsigned long long)attemptNumber;
- (double)maxSleepInterval;
- (void)setBaseSleepInterval:;
- (id)throttleDate;
- (id)initWithBaseSleepInterval:maxSleepInterval:;
- (double)baseSleepInterval;
- (void)setMaxSleepInterval:;
- (void).cxx_destruct;
- (void)reset;
- (double)_calculateThrottleInterval;
- (void)setThrottleDate:;
- (BOOL)shouldThrottle;
@end
