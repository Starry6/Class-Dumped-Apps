@interface ASSSettingModel : NSObject
+ (void)clearSetting;
+ (BOOL)getGidSwitch;
+ (BOOL)getLogUploadSwitch;
+ (BOOL)getVkeySwitchInDataMode;
+ (BOOL)getVkeySwitchInTokenMode;
+ (void)initializeSettings;
+ (void)saveSetting;
+ (void)setGidSwitch:;
+ (void)setLogUploadSwitch:;
+ (void)setVkeySwitchInDataMode:;
+ (void)setVkeySwitchInTokenMode:;
@end
