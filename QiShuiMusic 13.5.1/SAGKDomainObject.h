@interface SAGKDomainObject : SADomainObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)domainObject;
+ (id)domainObjectWithDictionary:context:;
@end
