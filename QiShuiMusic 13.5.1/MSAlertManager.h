@interface MSAlertManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_userDidRespondToNotification:info:responseFlags:;
- (void)_dismissNotificationForPersonID:;
- (void)_showNotificationInfo:;
- (void)displayAlertForPersonID:notificationDict:completionBlock:;
+ (id)sharedAlertManager;
@end
