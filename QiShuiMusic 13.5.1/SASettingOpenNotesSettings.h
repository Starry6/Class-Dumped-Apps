@interface SASettingOpenNotesSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openNotesSettings;
+ (id)openNotesSettingsWithDictionary:context:;
@end
