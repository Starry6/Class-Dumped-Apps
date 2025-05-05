@interface SASettingOpenFaceTimeSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openFaceTimeSettings;
+ (id)openFaceTimeSettingsWithDictionary:context:;
@end
