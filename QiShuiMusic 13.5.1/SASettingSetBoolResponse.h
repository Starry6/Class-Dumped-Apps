@interface SASettingSetBoolResponse : SASettingSetValueResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setBoolResponse;
+ (id)setBoolResponseWithDictionary:context:;
@end
