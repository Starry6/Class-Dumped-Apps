@interface SASettingOpenVimeoSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openVimeoSettings;
+ (id)openVimeoSettingsWithDictionary:context:;
@end
