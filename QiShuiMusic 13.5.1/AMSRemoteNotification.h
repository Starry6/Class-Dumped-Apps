@interface AMSRemoteNotification : NSObject
+ (void)handleNotification:;
+ (BOOL)shouldHandleNotification:;
+ (id)_sharedPushHandler;
@end
