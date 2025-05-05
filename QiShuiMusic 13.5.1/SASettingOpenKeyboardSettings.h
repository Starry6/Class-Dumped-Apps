@interface SASettingOpenKeyboardSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openKeyboardSettings;
+ (id)openKeyboardSettingsWithDictionary:context:;
@end
