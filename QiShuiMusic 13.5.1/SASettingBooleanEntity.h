@interface SASettingBooleanEntity : SASettingEntity
@property (nonatomic) NSNumber previousValue;
@property (nonatomic) BOOL value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)previousValue;
- (BOOL)value;
- (void)setPreviousValue:;
- (id)initWithValue:;
+ (id)booleanEntity;
+ (id)booleanEntityWithDictionary:context:;
+ (id)booleanEntityWithValue:;
@end
