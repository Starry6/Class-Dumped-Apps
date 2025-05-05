@interface SASettingOpenControlCenterSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openControlCenterSettings;
+ (id)openControlCenterSettingsWithDictionary:context:;
@end
