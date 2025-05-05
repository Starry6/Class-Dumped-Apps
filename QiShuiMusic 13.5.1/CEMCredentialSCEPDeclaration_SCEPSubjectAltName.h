@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase
@property (nonatomic) NSString payloadRfc822Name;
@property (nonatomic) NSString payloadDNSName;
@property (nonatomic) NSString payloadUniformResourceIdentifier;
@property (nonatomic) NSString payloadNtPrincipalName;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadRfc822Name;
- (void)setPayloadRfc822Name:;
- (id)payloadDNSName;
- (void)setPayloadDNSName:;
- (id)payloadUniformResourceIdentifier;
- (void)setPayloadUniformResourceIdentifier:;
- (id)payloadNtPrincipalName;
- (void)setPayloadNtPrincipalName:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:withDNSName:withUniformResourceIdentifier:withNtPrincipalName:;
@end
