@interface SASettingOpenStoreSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openStoreSettings;
+ (id)openStoreSettingsWithDictionary:context:;
@end
