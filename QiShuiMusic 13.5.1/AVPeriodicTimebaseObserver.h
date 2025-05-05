@interface AVPeriodicTimebaseObserver : AVTimebaseObserver
- (void)dealloc;
- (void)_handleTimeDiscontinuity;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (id)initWithTimebase:interval:queue:block:;
- (void)_fireBlockForTime:;
@end
