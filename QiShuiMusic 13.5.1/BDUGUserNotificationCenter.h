@interface BDUGUserNotificationCenter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)userNotificationCenter:willPresentNotification:withCompletionHandler:;
- (void)userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:;
- (void)userNotificationCenter:openSettingsForNotification:;
- (void)registerForRemoteNotifications;
+ (id)sharedInstance;
@end
