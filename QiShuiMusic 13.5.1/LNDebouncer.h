@interface LNDebouncer : NSObject
@property (nonatomic) double delay;
@property (nonatomic) double maxDelay;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? block;
@property (nonatomic) LNWatchdogTimer timer;
@property (nonatomic) LNWatchdogTimer longTimer;
- (id)block;
- (double)delay;
- (void)trigger;
- (void).cxx_destruct;
- (id)timer;
- (double)maxDelay;
- (id)queue;
- (id)initWithDelay:maxDelay:queue:block:;
- (id)longTimer;
@end
