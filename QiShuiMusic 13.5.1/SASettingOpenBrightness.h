@interface SASettingOpenBrightness : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openBrightness;
+ (id)openBrightnessWithDictionary:context:;
@end
