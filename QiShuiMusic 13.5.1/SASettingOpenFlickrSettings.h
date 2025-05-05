@interface SASettingOpenFlickrSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openFlickrSettings;
+ (id)openFlickrSettingsWithDictionary:context:;
@end
