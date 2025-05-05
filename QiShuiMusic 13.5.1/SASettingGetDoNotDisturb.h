@interface SASettingGetDoNotDisturb : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getDoNotDisturb;
+ (id)getDoNotDisturbWithDictionary:context:;
@end
