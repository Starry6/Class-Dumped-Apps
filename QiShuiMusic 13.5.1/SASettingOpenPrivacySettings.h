@interface SASettingOpenPrivacySettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openPrivacySettings;
+ (id)openPrivacySettingsWithDictionary:context:;
@end
