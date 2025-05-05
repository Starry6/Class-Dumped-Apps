@interface CSJAPIThrottlingConfiguration : NSObject
@property (nonatomic) double timeDuration;
@property (nonatomic) q maxTimes;
@property (nonatomic) Q throttlingStrategy;
- (long long)maxTimes;
- (void)setMaxTimes:;
- (void)setThrottlingStrategy:;
- (void)setTimeDuration:;
- (unsigned long long)throttlingStrategy;
- (double)timeDuration;
@end
