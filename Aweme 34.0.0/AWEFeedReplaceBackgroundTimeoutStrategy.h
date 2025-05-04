@interface AWEFeedReplaceBackgroundTimeoutStrategy : AWEFeedReplaceStrategy
@property (nonatomic) q backgroundTimeInterval;
@property (nonatomic) double lastEnterBackgroundTimeStamp;
- (void)setBackgroundTimeInterval:;
- (void)setLastEnterBackgroundTimeStamp:;
- (long long)backgroundTimeInterval;
- (double)lastEnterBackgroundTimeStamp;
- (void)onStrategyInitWithConfig:;
- (void)willEnterForeground:;
- (void)didEnterBackground:;
@end
