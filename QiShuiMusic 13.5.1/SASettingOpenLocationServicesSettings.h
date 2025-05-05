@interface SASettingOpenLocationServicesSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openLocationServicesSettings;
+ (id)openLocationServicesSettingsWithDictionary:context:;
@end
