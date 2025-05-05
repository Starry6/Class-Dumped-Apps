@interface SASettingGetAutoBrightness : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getAutoBrightness;
+ (id)getAutoBrightnessWithDictionary:context:;
@end
