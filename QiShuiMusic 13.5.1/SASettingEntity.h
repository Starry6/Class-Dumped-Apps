@interface SASettingEntity : SADomainObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)entity;
+ (id)entityWithDictionary:context:;
@end
