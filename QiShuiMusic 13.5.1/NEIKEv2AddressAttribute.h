@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute
@property (nonatomic) NWAddressEndpoint address;
- (id)descriptionWithIndent:options:;
- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (id)initWithAddress:;
- (id)description;
- (id)address;
- (id)copyWithZone:;
- (id)initCustomWithAttributeType:attributeName:addressValue:;
+ (id)copyTypeDescription;
@end
