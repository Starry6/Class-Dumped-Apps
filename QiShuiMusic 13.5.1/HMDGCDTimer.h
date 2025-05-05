@interface HMDGCDTimer : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
- (BOOL)existTimer;
- (void)scheduledDispatchTimerWithInterval:queue:repeats:action:;
- (id)init;
- (void)cancelTimer;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
@end
