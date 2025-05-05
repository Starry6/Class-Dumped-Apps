@interface SASettingOpenFacebookSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openFacebookSettings;
+ (id)openFacebookSettingsWithDictionary:context:;
@end
