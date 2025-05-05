@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute
@property (nonatomic) NWAddressEndpoint address;
@property (nonatomic) C prefix;
@property (nonatomic) I ipv4SubnetMask;
@property (nonatomic) NWAddressEndpoint subnetMaskAddress;
- (id)descriptionWithIndent:options:;
- (unsigned char)prefix;
- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (id)description;
- (id)address;
- (id)copyWithZone:;
- (id)initWithAddress:prefix:;
- (id)initWithAddress:ipv4SubnetMask:;
- (id)initCustomWithAttributeType:attributeName:addressValue:prefix:;
- (id)initCustomWithAttributeType:attributeName:addressValue:ipv4SubnetMask:;
- (id)subnetMaskAddress;
- (unsigned int)ipv4SubnetMask;
+ (id)copyTypeDescription;
@end
