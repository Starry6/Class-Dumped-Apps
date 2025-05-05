@interface CLTimer : NSObject
@property (nonatomic) double nextFireTime;
@property (nonatomic) @? handler;
@property (nonatomic) double nextFireDelay;
@property (nonatomic) double fireInterval;
- (void)setNextFireTime:interval:;
- (void)setFireInterval:;
- (double)nextFireTime;
- (void)setNextFireDelay:interval:;
- (double)fireInterval;
- (void)setHandler:;
- (void)updateScheduler;
- (double)nextFireDelayRaw;
- (id)handler;
- (void)shouldFire;
- (id)initInSilo:withScheduler:;
- (void).cxx_destruct;
- (void)setNextFireTime:;
- (void)setNextFireDelay:;
- (double)nextFireDelay;
- (void)invalidate;
- (void)dbgAssertInside;
@end
