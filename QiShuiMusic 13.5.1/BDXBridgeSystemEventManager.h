@interface BDXBridgeSystemEventManager : NSObject
@property (nonatomic) q lastOrientation;
- (void)_notifiAppStatusChange:;
- (void)handleDidEnterBackground:;
- (void)handleKeyboardDidHideNotification:;
- (void)handleKeyboardDidShowNotification:;
- (void)handleMemoryWarning:;
- (void)handleWillEnterForeground:;
- (void)notifyKeyboardVisibilityChange:height:;
- (void)onAudioRouteChange:;
- (void)onScreenShot:;
- (void)p_notifyInterfaceOrientationChange:;
- (void)publishHeadphoneChangeEventState:outputPort:;
- (void)screenCapturedDidChange:;
- (id)init;
- (long long)lastOrientation;
- (void)setLastOrientation:;
+ (void)endNotifier;
+ (void)notifyLoginStatusChange:;
+ (void)notifySystemBack;
+ (id)sharedManager;
+ (void)startNotifier;
@end
