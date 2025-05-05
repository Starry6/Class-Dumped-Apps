@interface SASettingOpenNotificationSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openNotificationSettings;
+ (id)openNotificationSettingsWithDictionary:context:;
@end
