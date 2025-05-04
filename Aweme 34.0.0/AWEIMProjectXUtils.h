@interface AWEIMProjectXUtils : NSObject
+ (BOOL)isProjectXAppInstalled;
+ (void)openOrShowInstallProjectXAlertWithEvent:enterFrom:enterMethod:messageStyle:customTitle:openHost:openParams:;
+ (void)openProjectXAppWithHost:params:;
+ (void)reportDuoshanInstallStatus:;
@end
