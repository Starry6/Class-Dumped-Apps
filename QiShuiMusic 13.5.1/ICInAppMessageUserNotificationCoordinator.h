@interface ICInAppMessageUserNotificationCoordinator : NSObject
+ (id)_musicCenter;
+ (id)_amsPushHandler;
+ (void)addBadgeIconForBundleIdentifier:completion:;
+ (void)removeBadgeIconForBundleIdentifier:completion:;
+ (BOOL)scheduleNotificationWithPayload:forBundleIdentifier:;
+ (void)removeNotificationWithIdentifier:forBundleIdentifier:;
+ (id)_centerForBundleIdentifier:;
@end
