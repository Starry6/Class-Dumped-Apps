@interface AWEServiceKitSwift.BridgedAppLifeCycle : NSObject
- (void)onAppDidBecomeActive;
- (void)onAppModuleWillBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (unsigned long long)instancePriority;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onAppDidReceiveMemoryWarning;
- (void)onAppDidRegisterDeviceToken;
- (void)onAppDidFailToRegisterForRemoteNotifications;
- (void)onAppDidReceiveLocalNotification;
- (void)onAppDidReceiveRemoteNotification;
- (void)onAppHandleNotification;
- (void)onAppPerformBackgroundFetch;
- (void)onHandleAppShortcutAction;
- (void)onHandleEventsForBackgroundURLSession;
- (BOOL)onHandleAppOpenUrl;
- (BOOL)onHandleAppContinueUserActivity;
- (id)init;
- (void).cxx_destruct;
@end
