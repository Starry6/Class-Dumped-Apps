@interface BDUGPushAuthorization : NSObject
+ (id)convertSystemPushSetting:;
+ (id)convertUNAlertStyle:;
+ (id)convertUNAuthorizationStatus:;
+ (id)convertUNNotificationSetting:;
+ (id)convertUNShowPreviewsSetting:;
+ (id)convertiOS12NotifyStatusWithAuthorizationSettings:;
+ (id)detailPushStatus:;
+ (id)detailPushStatusBeforeIOS10;
+ (BOOL)isSilentNotification:;
+ (id)systemPushStatus;
@end
