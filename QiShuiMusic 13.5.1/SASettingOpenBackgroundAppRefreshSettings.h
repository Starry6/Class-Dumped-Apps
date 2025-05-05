@interface SASettingOpenBackgroundAppRefreshSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openBackgroundAppRefreshSettings;
+ (id)openBackgroundAppRefreshSettingsWithDictionary:context:;
@end
