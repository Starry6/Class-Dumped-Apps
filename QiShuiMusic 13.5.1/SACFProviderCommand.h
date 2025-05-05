@interface SACFProviderCommand : SACFAbstractClientCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)providerCommand;
+ (id)providerCommandWithDictionary:context:;
@end
