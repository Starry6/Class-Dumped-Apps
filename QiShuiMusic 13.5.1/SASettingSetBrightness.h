@interface SASettingSetBrightness : SASettingSetFloat
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)setBrightness;
+ (id)setBrightnessWithDictionary:context:;
@end
