@interface AVTimebaseObserver : NSObject
@property (nonatomic) AVWeakReference weakReference;
@property (nonatomic) ^{OpaqueCMTimebase=} timebase;
@property (nonatomic) BOOL invalidated;
- (void)dealloc;
- (BOOL)invalidated;
- (void)_handleTimeDiscontinuity;
- (id)_weakReference;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)invalidate;
- (id)timebase;
- (id)initWithTimebase:queue:;
- (void)_reallyInvalidate;
- (void)_attachTimerSourceToTimebase;
- (void)_finishInitializationWithTimerEventHandler:;
- (void)_removeTimebaseFromTimerSource;
- (void)_startObservingTimebaseNotifications;
- (void)_stopObservingTimebaseNotifications;
@end
