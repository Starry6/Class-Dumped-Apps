@interface SASettingOpenSoundsSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openSoundsSettings;
+ (id)openSoundsSettingsWithDictionary:context:;
@end
