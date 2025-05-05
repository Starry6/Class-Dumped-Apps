@interface SASettingSetFlashlight : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setFlashlight;
+ (id)setFlashlightWithDictionary:context:;
@end
