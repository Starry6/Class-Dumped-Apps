@interface SASettingOpenSettings : SASettingCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openSettings;
+ (id)openSettingsWithDictionary:context:;
@end
