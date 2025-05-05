@interface AAUserNotification : NSObject
+ (id)_defaultParameters;
+ (void)showUserNotificationWithTitle:message:cancelButtonTitle:otherButtonTitle:withCompletionBlock:;
+ (void)showUserNotificationWithTitle:message:textFieldTitle:cancelButtonTitle:otherButtonTitle:completion:;
+ (void)showUserNotificationWithTitle:message:secureTextFieldTitle:cancelButtonTitle:otherButtonTitle:completion:;
+ (void)_waitForResponseAndReleaseNotification:completion:;
+ (void)waitForResponseToNotification:completion:;
@end
