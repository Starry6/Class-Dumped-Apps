@interface SASettingSetNumberResponse : SASettingSetValueResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setNumberResponse;
+ (id)setNumberResponseWithDictionary:context:;
@end
