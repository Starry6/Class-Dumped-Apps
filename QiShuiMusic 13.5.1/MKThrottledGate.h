@interface MKThrottledGate : NSObject
- (void)dealloc;
- (void)_timerFired:;
- (BOOL)_dispatchWaitingJobsIfNecessary;
- (void)_ensureTimer;
- (void)dispatch:;
- (void).cxx_destruct;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (id)description;
- (id)initWithMax:refreshRate:queue:;
@end
