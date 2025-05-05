@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase
@property (nonatomic) NSData payloadCertificate;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)payloadCertificate;
- (void)setPayloadCertificate:;
+ (id)allowedPayloadKeys;
+ (id)buildWithCertificate:;
+ (id)buildRequiredOnlyWithCertificate:;
@end
