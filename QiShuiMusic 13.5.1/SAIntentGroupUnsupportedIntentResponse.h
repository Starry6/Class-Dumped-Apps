@interface SAIntentGroupUnsupportedIntentResponse : SAIntentGroupIntentInvocationResponse
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)unsupportedIntentResponse;
+ (id)unsupportedIntentResponseWithDictionary:context:;
@end
