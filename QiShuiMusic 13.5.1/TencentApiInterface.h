@interface TencentApiInterface : NSObject
+ (BOOL)canOpenURL:delegate:;
+ (BOOL)handleOpenURL:delegate:;
+ (BOOL)installIphoneQZone;
+ (BOOL)iphoneQZoneSupportApi;
+ (BOOL)isTencentAppInstall:;
+ (BOOL)isTencentAppSupportTencentApi:;
+ (void)openThirdApp:;
+ (int)sendRespMessaageToThirdApp:appId:;
+ (int)sendRespMessageToTencentApp:;
@end
