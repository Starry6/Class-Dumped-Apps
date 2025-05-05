@interface SACFProviderCompleted : SACFAbstractClientCommandCompleted
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)providerCompleted;
+ (id)providerCompletedWithDictionary:context:;
@end
