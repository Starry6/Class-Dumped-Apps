@interface FigCaptureDeviceLockStateMonitor : NSObject
- (id)init;
- (void)dealloc;
- (void)addDeviceLockStateObserver:;
- (void)removeDeviceLockStateObserver:;
+ (id)sharedDeviceLockStateMonitor;
@end
