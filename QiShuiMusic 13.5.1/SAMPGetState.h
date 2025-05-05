@interface SAMPGetState : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getState;
+ (id)getStateWithDictionary:context:;
@end
