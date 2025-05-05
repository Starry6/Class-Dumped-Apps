@interface SASettingSetPowerSavingMode : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setPowerSavingMode;
+ (id)setPowerSavingModeWithDictionary:context:;
@end
