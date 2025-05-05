@interface SASettingOpenVideosSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openVideosSettings;
+ (id)openVideosSettingsWithDictionary:context:;
@end
