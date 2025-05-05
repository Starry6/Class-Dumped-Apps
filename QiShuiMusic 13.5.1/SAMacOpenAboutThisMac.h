@interface SAMacOpenAboutThisMac : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openAboutThisMac;
+ (id)openAboutThisMacWithDictionary:context:;
@end
