@interface SASettingCommand : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)command;
+ (id)commandWithDictionary:context:;
@end
