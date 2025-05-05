@interface PLMomentGenerationThrottle : NSObject
@property (nonatomic) <PLMomentGenerationThrottleTimeProvider> timeProvider;
@property (nonatomic) BOOL singleThreaded;
- (id)timeProvider;
- (id)initWithName:canDelayAnyQOS:singleThreadedMode:timeProvider:targetQueue:target:;
- (void)setSingleThreaded:;
- (void).cxx_destruct;
- (void)update;
- (BOOL)isIdle;
- (void)_doAsyncUpdateWithCompletionBlock:tryAgainLaterBlock:tryAgainAfterCurrentExecutionBlock:;
- (BOOL)singleThreaded;
@end
