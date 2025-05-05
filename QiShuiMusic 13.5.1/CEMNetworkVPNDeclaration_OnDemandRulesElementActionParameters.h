@interface CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters : CEMPayloadBase
@property (nonatomic) NSArray payloadDomains;
@property (nonatomic) NSString payloadDomainAction;
@property (nonatomic) NSArray payloadRequiredDNSServers;
@property (nonatomic) NSString payloadRequiredURLStringProbe;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDomains;
- (void)setPayloadDomains:;
- (id)payloadDomainAction;
- (void)setPayloadDomainAction:;
- (id)payloadRequiredDNSServers;
- (void)setPayloadRequiredDNSServers:;
- (id)payloadRequiredURLStringProbe;
- (void)setPayloadRequiredURLStringProbe:;
+ (id)allowedPayloadKeys;
+ (id)buildWithDomains:withDomainAction:withRequiredDNSServers:withRequiredURLStringProbe:;
+ (id)buildRequiredOnlyWithDomains:withDomainAction:;
@end
