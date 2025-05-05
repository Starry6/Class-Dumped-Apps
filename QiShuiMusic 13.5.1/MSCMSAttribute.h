@interface MSCMSAttribute : NSObject
@property (nonatomic) NSData attributeDERData;
@property (nonatomic) ^{Attribute={heim_oid=Q^I}{Attribute_value=I^{heim_base_data}}} encodedAttribute;
@property (nonatomic) MSOID attributeType;
@property (nonatomic) NSArray attributeValues;
- (void)dealloc;
- (void).cxx_destruct;
- (id)attributeType;
- (id)initWithAttribute:error:;
- (id)attributeValues;
- (id)encodeAttributeWithError:;
- (id)initWithAttributeStruct:error:;
- (id)initWithDER:;
- (id)initWithAttributeType:values:;
- (id)generateAttributeStruct;
- (id)attributeDERData;
- (void)setAttributeDERData:;
- (id)encodedAttribute;
- (void)setEncodedAttribute:;
+ (id)decodeAttribute:error:;
@end
