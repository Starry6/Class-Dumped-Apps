@interface SASettingOpenSinaWeiboSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openSinaWeiboSettings;
+ (id)openSinaWeiboSettingsWithDictionary:context:;
@end
