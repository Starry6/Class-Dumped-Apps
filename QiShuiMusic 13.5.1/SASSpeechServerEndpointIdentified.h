@interface SASSpeechServerEndpointIdentified : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)speechServerEndpointIdentified;
+ (id)speechServerEndpointIdentifiedWithDictionary:context:;
@end
