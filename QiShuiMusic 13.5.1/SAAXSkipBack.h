@interface SAAXSkipBack : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)skipBack;
+ (id)skipBackWithDictionary:context:;
@end
