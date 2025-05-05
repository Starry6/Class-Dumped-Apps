@interface AVOccasionalTimebaseObserver : AVTimebaseObserver
- (void)dealloc;
- (id)initWithTimebase:times:queue:block:;
- (void)_handleTimeDiscontinuity;
- (void)_fireBlock;
- (void)_effectiveRateChanged;
- (id)_previousFiringTimeBeforeTime:;
- (id)_nextFiringTimeAfterTime:;
- (void)_resetNextFireTime;
@end
