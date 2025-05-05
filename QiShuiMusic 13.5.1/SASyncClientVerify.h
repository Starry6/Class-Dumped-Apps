@interface SASyncClientVerify : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)clientVerify;
+ (id)clientVerifyWithDictionary:context:;
@end
