@interface SASettingOpenCompassSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openCompassSettings;
+ (id)openCompassSettingsWithDictionary:context:;
@end
