@interface SAPersonAttribute : AceObject
@property (nonatomic) NSString data;
@property (nonatomic) NSString dataType;
@property (nonatomic) NSString displayText;
@property (nonatomic) SAPerson object;
@property (nonatomic) <SAAceComparable> typedData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)st_contactAddressValue;
- (void)setDataType:;
- (void)setObject:;
- (id)groupIdentifier;
- (id)data;
- (id)dataType;
- (id)displayText;
- (id)encodedClassName;
- (id)object;
- (void)setData:;
- (void)setDisplayText:;
- (id)typedData;
- (void)setTypedData:;
+ (id)personAttribute;
+ (id)personAttributeWithDictionary:context:;
@end
