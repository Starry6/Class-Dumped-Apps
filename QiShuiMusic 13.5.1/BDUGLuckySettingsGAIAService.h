@interface BDUGLuckySettingsGAIAService : NSObject
+ (void)initializeSettingsModule;
+ (void)onReceiveBaseModeChangedEvent;
+ (void)onReceiveLogInEvent;
+ (void)onReceiveLogoutEvent;
+ (void)onReceiveTeenModeChangedEvent;
+ (void)refreshActHashFailedWithRefreshScene:;
+ (void)refreshActHashSuccessWithRefreshScene:;
+ (void)refreshSettingsModuleWhenSDKRestart;
+ (void)sdkSettingsUpdate;
@end
