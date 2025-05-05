@interface SASettingOpenTwitterSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openTwitterSettings;
+ (id)openTwitterSettingsWithDictionary:context:;
@end
