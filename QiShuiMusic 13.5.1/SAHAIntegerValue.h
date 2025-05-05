@interface SAHAIntegerValue : SAHAAttributeValue
@property (nonatomic) q value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (long long)value;
+ (id)integerValue;
+ (id)integerValueWithDictionary:context:;
@end
