@interface SASettingOpenMCCSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openMCCSettings;
+ (id)openMCCSettingsWithDictionary:context:;
@end
