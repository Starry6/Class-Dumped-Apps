@interface AMSUNUserNotificationStrategy : NSObject
+ (id)_activeNotificationsWithCenterBundleId:;
+ (BOOL)_badgeBundleId:increment:error:;
+ (id)_postNotification:bag:centerBundleId:;
+ (id)_removeNotificationWithIdentifier:centerBundleId:logKey:scheduledOnly:;
+ (id)_removeNotification:centerBundleId:;
+ (id)_centerForBundleId:;
@end
