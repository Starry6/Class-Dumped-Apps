@interface SACancelSucceeded : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)cancelSucceeded;
+ (id)cancelSucceededWithDictionary:context:;
@end
