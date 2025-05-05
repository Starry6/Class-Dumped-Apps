@interface SASettingGetFloatResponse : SASettingGetNumberResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getFloatResponse;
+ (id)getFloatResponseWithDictionary:context:;
@end
