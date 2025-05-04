@interface AWESettingsCore : NSObject
+ (id)getSettingValueWithName:settingsKey:defaultValue:stable:type:;
+ (id)debugOverride_getSettingValueWithName:settingsKey:defaultValue:stable:type:;
@end
