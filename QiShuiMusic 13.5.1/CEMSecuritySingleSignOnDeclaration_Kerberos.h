@interface CEMSecuritySingleSignOnDeclaration_Kerberos : CEMPayloadBase
@property (nonatomic) NSString payloadPrincipalName;
@property (nonatomic) NSString payloadPayloadCertificateUUID;
@property (nonatomic) NSString payloadRealm;
@property (nonatomic) NSArray payloadURLPrefixMatches;
@property (nonatomic) NSArray payloadAppIdentifierMatches;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadAppIdentifierMatches;
- (void)setPayloadAppIdentifierMatches:;
- (id)payloadRealm;
- (void)setPayloadRealm:;
- (id)payloadPayloadCertificateUUID;
- (void)setPayloadPayloadCertificateUUID:;
- (id)payloadPrincipalName;
- (void)setPayloadPrincipalName:;
- (id)payloadURLPrefixMatches;
- (void)setPayloadURLPrefixMatches:;
+ (id)allowedPayloadKeys;
+ (id)buildWithPrincipalName:withPayloadCertificateUUID:withRealm:withURLPrefixMatches:withAppIdentifierMatches:;
+ (id)buildRequiredOnlyWithRealm:;
@end
