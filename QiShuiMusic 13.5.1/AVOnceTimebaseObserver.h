@interface AVOnceTimebaseObserver : AVTimebaseObserver
@property (nonatomic) BOOL didFire;
- (void)dealloc;
- (void)_handleTimeDiscontinuity;
- (void)_fireBlock;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)invalidate;
- (id)initWithTimebase:fireTime:queue:block:;
- (BOOL)didFire;
@end
