@interface BDUGPushDeliveredNotificationsManager : NSObject
- (void)removeDeliveredNotificationsWithThreadIdentifier:completionHandler:;
- (void)getDeliveredNotificationsWithCompletionHandler:;
- (void)removeDeliveredNotificationsWithIdentifiers:;
- (void)removeAllDeliveredNotifications;
+ (id)currentManager;
@end
