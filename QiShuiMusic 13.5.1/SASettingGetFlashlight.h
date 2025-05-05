@interface SASettingGetFlashlight : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getFlashlight;
+ (id)getFlashlightWithDictionary:context:;
@end
