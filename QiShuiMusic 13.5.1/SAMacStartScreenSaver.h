@interface SAMacStartScreenSaver : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)startScreenSaver;
+ (id)startScreenSaverWithDictionary:context:;
@end
