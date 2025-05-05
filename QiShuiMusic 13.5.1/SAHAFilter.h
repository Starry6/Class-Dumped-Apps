@interface SAHAFilter : SADomainObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)filter;
+ (id)filterWithDictionary:context:;
@end
