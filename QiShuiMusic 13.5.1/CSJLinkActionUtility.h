@interface CSJLinkActionUtility : NSObject
+ (void)csj_postWillOpenURLNotification;
+ (BOOL)csj_canOpenURL:;
+ (void)csj_openURL:options:completion:;
+ (BOOL)csj_canOpenURL:updateInstall:;
+ (void)csj_openDeeplink:completion:;
+ (void)csj_openDeeplink:completionWithInfo:;
+ (void)csj_openURL:completion:;
+ (void)csj_openUlink:completion:;
+ (void)csj_postDidOpenURLNotificationWith:;
@end
