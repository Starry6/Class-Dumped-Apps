@interface AWEPushApplicationControllerImplLocal : NSObject
+ (void)customHandleNotificationPushContent:;
+ (void)handleNotificationPushContent:isColdLaunch:;
@end
