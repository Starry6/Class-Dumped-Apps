@interface MCUserNotificationManager : NSObject
@property (nonatomic) BOOL hasOutstandingNotifications;
- (id)init;
- (void)dealloc;
- (BOOL)hasOutstandingNotifications;
- (void)promptUserToLogIntoiTunesWithTitle:message:assertion:completionBlock:;
- (void)inviteUserToVPPWithTitle:message:assertion:completionBlock:;
- (id)displayQueueProfileError:targetDevice:;
- (void)displayUserNotificationWithIdentifier:title:message:defaultButtonText:alternateButtonText:otherButtonText:textfieldPlaceholder:displayOnLockScreen:dismissOnLock:displayInAppWhitelistModes:dismissAfterTimeInterval:assertion:completionBlock:;
- (void)cancelAllNotificationsCompletionBlock:;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)cancelNotificationsWithIdentifier:completionBlock:;
- (void)cancelNotificationEntriesMatchingPredicate:completionBlock:;
- (void)_updateTitle:andMessage:withTargetFailureInfoForDevice:fromError:;
- (void)_updateTitle:andMessage:withUnavailableTargetInfoForDevice:;
- (id)_purgatoryMessageForDevice:;
- (id)_invalidTargetMessageForDevice:;
+ (id)sharedManager;
@end
