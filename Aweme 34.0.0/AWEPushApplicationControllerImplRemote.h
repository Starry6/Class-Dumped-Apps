@interface AWEPushApplicationControllerImplRemote : NSObject
- (id)aAWEPushSchemaDOUYINJXAdapter;
+ (id)feedConsumptionPushInfo;
+ (id)referStringFromScheme:;
+ (id)consumeLastTimePushUserInfo;
+ (void)handleNotificationPushContent:isColdLaunch:;
+ (void)storeAwemePushInfoWithContent:;
+ (void)p_onAppHandleNotificationWithContent:isColdLaunch:;
+ (void)markShareTokenAppLaunchForNotification;
+ (void)trackAppLaunchWithPushOpenURL:isInBackground:;
+ (void)handleUidTrack:payload:;
+ (Class)aAWEPushSchemaDOUYINJXAdapterClass;
+ (void)handleAwemePush:session:userInfo:coldLaunch:extraInfo:;
+ (void)selectivelyCleanPushNotificationsIdentifier:;
+ (BOOL)inBackWhiteListWithId:templateId:;
+ (void)customTrackAwemePushWithPushId:extValue:netType:;
+ (id)excludeLabelForPushNotifications;
+ (double)customDelayTime;
+ (void)handleOpenSettings;
+ (void)logPushEventWithString:;
@end
