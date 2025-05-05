@interface SASettingGetBool : SASettingGetValue
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getBool;
+ (id)getBoolWithDictionary:context:;
@end
