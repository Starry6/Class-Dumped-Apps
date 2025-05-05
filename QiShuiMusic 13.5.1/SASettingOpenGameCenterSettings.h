@interface SASettingOpenGameCenterSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openGameCenterSettings;
+ (id)openGameCenterSettingsWithDictionary:context:;
@end
