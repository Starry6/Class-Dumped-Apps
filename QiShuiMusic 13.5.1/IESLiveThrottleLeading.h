@interface IESLiveThrottleLeading : IESLiveThrottle
@property (nonatomic) double interval;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSDate lastRunTaskDate;
- (void)runTaskDirectly;
- (id)lastRunTaskDate;
- (id)initWithInterval:onQueue:;
- (void)setLastRunTaskDate:;
- (void)setInterval:;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)call;
- (id)queue;
- (void)invalidate;
- (double)interval;
@end
