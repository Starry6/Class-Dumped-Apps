@interface SASettingOpenMapsSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openMapsSettings;
+ (id)openMapsSettingsWithDictionary:context:;
@end
