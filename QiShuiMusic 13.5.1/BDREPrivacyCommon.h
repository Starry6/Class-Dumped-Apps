@interface BDREPrivacyCommon : NSObject
+ (void)_registerAppColdLaunch;
+ (void)_registerAppHotLaunchTime;
+ (void)_registerAppStatus;
+ (void)_registerOSVersion;
+ (void)registerExtension;
+ (void)appWillEnterForeground;
+ (void)appDidEnterBackground;
@end
