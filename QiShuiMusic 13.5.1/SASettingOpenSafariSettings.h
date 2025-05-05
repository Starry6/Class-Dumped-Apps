@interface SASettingOpenSafariSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openSafariSettings;
+ (id)openSafariSettingsWithDictionary:context:;
@end
