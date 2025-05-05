@interface SAHAStringValue : SAHAAttributeValue
@property (nonatomic) NSString value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
+ (id)stringValue;
+ (id)stringValueWithDictionary:context:;
@end
