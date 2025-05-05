@interface ICUserNotificationManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)displayUserNotification:withCompletionHandler:;
- (void)_handleCallbackForUserNotification:responseFlags:;
+ (id)sharedManager;
@end
