@interface SASettingGetBoolResponse : SASettingGetValueResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getBoolResponse;
+ (id)getBoolResponseWithDictionary:context:;
@end
