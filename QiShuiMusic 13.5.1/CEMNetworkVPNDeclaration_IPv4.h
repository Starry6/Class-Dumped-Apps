@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase
@property (nonatomic) NSNumber payloadOverridePrimary;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadOverridePrimary;
- (void)setPayloadOverridePrimary:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithOverridePrimary:;
@end
