@interface SASettingOpenMusicSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openMusicSettings;
+ (id)openMusicSettingsWithDictionary:context:;
@end
