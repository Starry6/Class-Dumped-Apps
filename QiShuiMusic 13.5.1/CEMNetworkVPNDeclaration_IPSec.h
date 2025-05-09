@interface CEMNetworkVPNDeclaration_IPSec : CEMPayloadBase
@property (nonatomic) NSString payloadRemoteAddress;
@property (nonatomic) NSString payloadAuthenticationMethod;
@property (nonatomic) NSString payloadXAuthName;
@property (nonatomic) NSString payloadXAuthPassword;
@property (nonatomic) NSNumber payloadXAuthEnabled;
@property (nonatomic) NSString payloadXAuthPasswordEncryption;
@property (nonatomic) NSString payloadLocalIdentifier;
@property (nonatomic) NSString payloadLocalIdentifierType;
@property (nonatomic) NSData payloadSharedSecret;
@property (nonatomic) NSString payloadPayloadCertificateUUID;
@property (nonatomic) NSNumber payloadPromptForVPNPIN;
@property (nonatomic) NSNumber payloadOnDemandEnabled;
@property (nonatomic) NSArray payloadOnDemandMatchDomainsAlways;
@property (nonatomic) NSArray payloadOnDemandMatchDomainsNever;
@property (nonatomic) NSArray payloadOnDemandMatchDomainsOnRetry;
@property (nonatomic) NSArray payloadOnDemandRules;
@property (nonatomic) NSNumber payloadDisconnectOnIdle;
@property (nonatomic) NSNumber payloadDisconnectOnIdleTimer;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDisconnectOnIdle;
- (void)setPayloadDisconnectOnIdle:;
- (id)payloadDisconnectOnIdleTimer;
- (void)setPayloadDisconnectOnIdleTimer:;
- (id)payloadAuthenticationMethod;
- (void)setPayloadAuthenticationMethod:;
- (id)payloadPayloadCertificateUUID;
- (void)setPayloadPayloadCertificateUUID:;
- (id)payloadOnDemandEnabled;
- (void)setPayloadOnDemandEnabled:;
- (id)payloadOnDemandMatchDomainsAlways;
- (void)setPayloadOnDemandMatchDomainsAlways:;
- (id)payloadOnDemandMatchDomainsNever;
- (void)setPayloadOnDemandMatchDomainsNever:;
- (id)payloadOnDemandMatchDomainsOnRetry;
- (void)setPayloadOnDemandMatchDomainsOnRetry:;
- (id)payloadOnDemandRules;
- (void)setPayloadOnDemandRules:;
- (id)payloadRemoteAddress;
- (void)setPayloadRemoteAddress:;
- (id)payloadXAuthName;
- (void)setPayloadXAuthName:;
- (id)payloadXAuthPassword;
- (void)setPayloadXAuthPassword:;
- (id)payloadXAuthEnabled;
- (void)setPayloadXAuthEnabled:;
- (id)payloadXAuthPasswordEncryption;
- (void)setPayloadXAuthPasswordEncryption:;
- (id)payloadLocalIdentifier;
- (void)setPayloadLocalIdentifier:;
- (id)payloadLocalIdentifierType;
- (void)setPayloadLocalIdentifierType:;
- (id)payloadSharedSecret;
- (void)setPayloadSharedSecret:;
- (id)payloadPromptForVPNPIN;
- (void)setPayloadPromptForVPNPIN:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRemoteAddress:withAuthenticationMethod:withXAuthName:withXAuthPassword:withXAuthEnabled:withXAuthPasswordEncryption:withLocalIdentifier:withLocalIdentifierType:withSharedSecret:withPayloadCertificateUUID:withPromptForVPNPIN:withOnDemandEnabled:withOnDemandMatchDomainsAlways:withOnDemandMatchDomainsNever:withOnDemandMatchDomainsOnRetry:withOnDemandRules:withDisconnectOnIdle:withDisconnectOnIdleTimer:;
@end
