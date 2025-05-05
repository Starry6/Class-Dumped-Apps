@interface PLForegroundMonitor : NSObject
@property (nonatomic) <PLForegroundMonitorDelegate> delegate;
- (id)init;
- (void)_applicationChangeToBG:;
- (void)dealloc;
- (void)_locked_applicationDidMoveToForeground:;
- (void)_handleApplicationStateMonitorNotificationWithUserInfo:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_applicationChangeToFG:;
- (void)_locked_applicationDidMoveToBackground:;
@end
