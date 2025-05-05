@interface SASettingFloatEntity : SASettingNumericEntity
@property (nonatomic) NSNumber previousValue;
@property (nonatomic) float value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)previousValue;
- (float)value;
- (void)setPreviousValue:;
- (id)initWithValue:;
+ (id)floatEntity;
+ (id)floatEntityWithDictionary:context:;
+ (id)floatEntityWithValue:;
@end
