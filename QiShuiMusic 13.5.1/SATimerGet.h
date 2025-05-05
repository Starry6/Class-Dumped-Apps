@interface SATimerGet : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)get;
+ (id)getWithDictionary:context:;
@end
