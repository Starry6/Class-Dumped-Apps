@interface SAHAAttributeValue : AceObject
@property (nonatomic) NSString units;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setUnits:;
- (id)units;
- (id)encodedClassName;
+ (id)attributeValue;
+ (id)attributeValueWithDictionary:context:;
@end
