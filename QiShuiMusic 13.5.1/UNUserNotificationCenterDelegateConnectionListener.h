@interface UNUserNotificationCenterDelegateConnectionListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_queue_didOpenApplicationForResponse:forBundleIdentifier:;
- (void)_queue_ensureListenerForBundleIdentifier:;
- (void)didReceiveNotificationResponse:forBundleIdentifier:withCompletionHandler:;
- (void)setDelegate:forBundleIdentifier:;
- (void)_queue_didReceiveNotificationResponse:forBundleIdentifier:withCompletionHandler:;
- (void)_queue_setDelegate:forBundleIdentifier:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)didOpenApplicationForResponse:forBundleIdentifier:;
- (void)_queue_didChangeSettings:forBundleIdentifier:;
- (void)_queue_invalidateListenerForBundleIdentifier:;
- (void)didChangeSettings:forBundleIdentifier:;
+ (id)sharedInstance;
@end
