@interface SASettingOpenTencentWeiboSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openTencentWeiboSettings;
+ (id)openTencentWeiboSettingsWithDictionary:context:;
@end
