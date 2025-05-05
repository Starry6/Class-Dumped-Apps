@interface CEMNetworkVPNDeclaration_DNS : CEMPayloadBase
@property (nonatomic) NSArray payloadServerAddresses;
@property (nonatomic) NSArray payloadSearchDomains;
@property (nonatomic) NSString payloadDomainName;
@property (nonatomic) NSArray payloadSupplementalMatchDomains;
@property (nonatomic) NSNumber payloadSupplementalMatchDomainsNoSearch;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadSupplementalMatchDomains;
- (void)setPayloadSupplementalMatchDomains:;
- (id)payloadServerAddresses;
- (void)setPayloadServerAddresses:;
- (id)payloadSearchDomains;
- (void)setPayloadSearchDomains:;
- (id)payloadDomainName;
- (void)setPayloadDomainName:;
- (id)payloadSupplementalMatchDomainsNoSearch;
- (void)setPayloadSupplementalMatchDomainsNoSearch:;
+ (id)allowedPayloadKeys;
+ (id)buildWithServerAddresses:withSearchDomains:withDomainName:withSupplementalMatchDomains:withSupplementalMatchDomainsNoSearch:;
+ (id)buildRequiredOnlyWithServerAddresses:;
@end
