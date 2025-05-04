@interface AWEScreenCastSettingsManager : NSObject
+ (BOOL)longVideoSupportCast:;
+ (BOOL)longVideoEnableOnlySupportXsg:;
+ (id)shortVideoCastConfig:;
+ (BOOL)searchViewUnification;
+ (BOOL)useNewControlViewUI;
+ (id)bizSettingConfig;
+ (BOOL)enableLongVideoFocusMode;
+ (id)screenCastSDKSettings;
+ (id)screenCastInnerFeedConfig;
+ (BOOL)landscapeCastEnable:;
+ (BOOL)hideHMCastEntrance;
+ (id)longVideoCastInFeedConfig;
+ (BOOL)enableCheckURLExpire;
+ (BOOL)isLVOpenWeaken;
@end
