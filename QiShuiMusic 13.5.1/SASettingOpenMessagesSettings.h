@interface SASettingOpenMessagesSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openMessagesSettings;
+ (id)openMessagesSettingsWithDictionary:context:;
@end
