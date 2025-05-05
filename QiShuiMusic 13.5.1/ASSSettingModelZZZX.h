@interface ASSSettingModelZZZX : NSObject
+ (id)getTimeInterval;
+ (id)getWebrtcSwitch;
+ (void)setAgentSwitch:;
+ (void)setDegradeTime:;
+ (void)clearSetting;
+ (id)getAgentSwitch;
+ (id)getDegradeTime;
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
+ (void)setWebrtcSwitch:;
+ (void)setTimeInterval:;
@end
