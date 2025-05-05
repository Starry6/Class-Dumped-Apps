@interface BDADSDK.SettingsManager : NSObject
- (BOOL)hitRitForReplaceTag:;
- (id)deviceModelScore;
- (id)stringValueFor:;
- (id)objectValueFor:;
- (id)arrayValueFor:;
- (BOOL)boolValueFor:defaultValue:;
- (id)dictionaryValueForSettingsKeyWithSettingsKey:;
- (void)fetchSettings;
- (double)floatValueFor:defaultValue:;
- (id)getSettings;
- (long long)integerValueFor:defaultValue:;
- (id)init;
- (void).cxx_destruct;
+ (id)adSDKSettingsResponseNotification;
+ (id)shared;
@end
