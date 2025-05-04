@interface AWETeenPureModePageNotificationController : AWEBaseController
- (void)_windowDidBecomeKeyNotification:;
- (void)_windowDidResignKeyNotification:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_appWillResignActive:;
- (void)_appDidBecomeActive:;
@end
