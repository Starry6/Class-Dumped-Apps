@interface SASettingOpenTextSizeSettings : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openTextSizeSettings;
+ (id)openTextSizeSettingsWithDictionary:context:;
@end
