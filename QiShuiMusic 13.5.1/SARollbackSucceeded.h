@interface SARollbackSucceeded : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)rollbackSucceeded;
+ (id)rollbackSucceededWithDictionary:context:;
@end
