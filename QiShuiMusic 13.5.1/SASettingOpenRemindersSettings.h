@interface SASettingOpenRemindersSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openRemindersSettings;
+ (id)openRemindersSettingsWithDictionary:context:;
@end
