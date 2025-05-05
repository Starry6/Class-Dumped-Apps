@interface SASettingOpenICloudSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openICloudSettings;
+ (id)openICloudSettingsWithDictionary:context:;
@end
