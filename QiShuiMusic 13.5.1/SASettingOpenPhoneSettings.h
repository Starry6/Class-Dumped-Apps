@interface SASettingOpenPhoneSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openPhoneSettings;
+ (id)openPhoneSettingsWithDictionary:context:;
@end
