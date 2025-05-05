@interface SASettingNumericEntity : SASettingEntity
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)numericEntity;
+ (id)numericEntityWithDictionary:context:;
@end
