@interface IESLiveThrottle : NSObject
@property (nonatomic) @? task;
- (id)initWithInterval:onQueue:;
- (id)initWithThrottleMode:interval:onQueue:;
- (id)task;
- (void)setTask:;
- (void).cxx_destruct;
- (void)call;
- (void)invalidate;
@end
