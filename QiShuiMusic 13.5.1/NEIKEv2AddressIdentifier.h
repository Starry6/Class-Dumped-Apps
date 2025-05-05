@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier
@property (nonatomic) NWAddressEndpoint address;
- (id)stringValue;
- (void).cxx_destruct;
- (id)initWithAddress:;
- (unsigned long long)identifierType;
- (id)address;
- (id)identifierData;
+ (id)copyTypeDescription;
@end
