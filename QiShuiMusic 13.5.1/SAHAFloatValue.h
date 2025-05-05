@interface SAHAFloatValue : SAHAAttributeValue
@property (nonatomic) float value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (float)value;
+ (id)floatValue;
+ (id)floatValueWithDictionary:context:;
@end
