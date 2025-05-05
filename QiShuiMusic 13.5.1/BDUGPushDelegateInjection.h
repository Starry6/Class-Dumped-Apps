@interface BDUGPushDelegateInjection : NSObject
- (void)application:didReceiveRemoteNotification:fetchCompletionHandler:;
- (void)application:handleActionWithIdentifier:forRemoteNotification:withResponseInfo:completionHandler:;
- (void)application:handleActionWithIdentifier:forRemoteNotification:completionHandler:;
- (void)application:didReceiveLocalNotification:;
- (void)application:handleActionWithIdentifier:forLocalNotification:withResponseInfo:completionHandler:;
- (void)application:didRegisterUserNotificationSettings:;
- (void)application:didRegisterForRemoteNotificationsWithDeviceToken:;
- (void)application:didFailToRegisterForRemoteNotificationsWithError:;
@end
