@interface SASettingSetFloatResponse : SASettingSetNumberResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setFloatResponse;
+ (id)setFloatResponseWithDictionary:context:;
@end
