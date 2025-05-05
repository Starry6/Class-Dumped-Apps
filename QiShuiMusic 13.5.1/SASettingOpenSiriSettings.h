@interface SASettingOpenSiriSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openSiriSettings;
+ (id)openSiriSettingsWithDictionary:context:;
@end
