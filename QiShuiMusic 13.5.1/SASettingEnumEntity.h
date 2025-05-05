@interface SASettingEnumEntity : SASettingEntity
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)enumEntity;
+ (id)enumEntityWithDictionary:context:;
@end
