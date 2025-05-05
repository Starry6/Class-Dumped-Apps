@interface SASettingGetNumberResponse : SASettingGetValueResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getNumberResponse;
+ (id)getNumberResponseWithDictionary:context:;
@end
