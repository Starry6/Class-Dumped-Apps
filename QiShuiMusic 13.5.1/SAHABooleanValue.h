@interface SAHABooleanValue : SAHAAttributeValue
@property (nonatomic) BOOL value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (BOOL)value;
+ (id)booleanValue;
+ (id)booleanValueWithDictionary:context:;
@end
