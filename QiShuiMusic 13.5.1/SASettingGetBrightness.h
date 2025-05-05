@interface SASettingGetBrightness : SASettingGetFloat
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getBrightness;
+ (id)getBrightnessWithDictionary:context:;
@end
