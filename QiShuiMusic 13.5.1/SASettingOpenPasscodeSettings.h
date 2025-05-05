@interface SASettingOpenPasscodeSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openPasscodeSettings;
+ (id)openPasscodeSettingsWithDictionary:context:;
@end
