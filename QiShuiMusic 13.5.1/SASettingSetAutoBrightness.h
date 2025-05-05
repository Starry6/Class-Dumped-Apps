@interface SASettingSetAutoBrightness : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setAutoBrightness;
+ (id)setAutoBrightnessWithDictionary:context:;
@end
