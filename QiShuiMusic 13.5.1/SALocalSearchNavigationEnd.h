@interface SALocalSearchNavigationEnd : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)navigationEnd;
+ (id)navigationEndWithDictionary:context:;
@end
