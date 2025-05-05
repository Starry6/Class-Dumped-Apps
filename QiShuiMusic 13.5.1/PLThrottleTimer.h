@interface PLThrottleTimer : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : action;
@property (nonatomic) double timeout;
@property (nonatomic) double maxTimeout;
- (void)ping;
- (void)_inqScheduleTimeout:maxTimeout:;
- (double)maxTimeout;
- (SEL)action;
- (void)setPaused:;
- (id)initWithTarget:action:invocationQueue:timeout:maxTimeout:;
- (void).cxx_destruct;
- (id)target;
- (double)timeout;
- (void)invalidate;
- (void)_inqFireWithTimeout:timeoutId:maxTimeout:maxTimeoutId:;
@end
