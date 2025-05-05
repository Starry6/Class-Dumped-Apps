@interface AMSUserNotificationCenter : NSObject
@property (nonatomic) <AMSUserNotificationStrategy> strategy;
- (id)strategy;
- (void).cxx_destruct;
+ (id)activeNotificationsWithCenterBundleId:;
+ (BOOL)badgeBundleId:badgeId:enabled:error:;
+ (id)postNotification:bag:centerBundleId:;
+ (id)removeNotification:centerBundleId:;
+ (id)removeNotificationWithIdentifier:centerBundleId:logKey:scheduledOnly:;
+ (Class)_determineStrategyForBundleId:;
@end
