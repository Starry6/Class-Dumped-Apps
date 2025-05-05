@interface WBSPeriodicActivityScheduler : NSObject
- (void)_timerDidFire:;
- (id)init;
- (id)initWithInterval:minimumDelay:lastFireDate:block:;
- (void)_performActivity;
- (void).cxx_destruct;
- (void)_scheduleActivityWithInterval:;
- (void)invalidate;
@end
