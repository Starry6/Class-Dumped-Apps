@interface SASettingGetAirplaneMode : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getAirplaneMode;
+ (id)getAirplaneModeWithDictionary:context:;
@end
