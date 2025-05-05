@interface CEMApplicationEnterpriseDeclaration_AppPackage : CEMPayloadBase
@property (nonatomic) NSString payloadDataURL;
@property (nonatomic) NSString payloadContentType;
@property (nonatomic) NSNumber payloadSize;
@property (nonatomic) NSString payloadHashSHA256;
@property (nonatomic) NSArray payloadCertificatePinningIdentifiers;
- (id)payloadSize;
- (void)setPayloadSize:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDataURL;
- (void)setPayloadDataURL:;
- (id)payloadContentType;
- (void)setPayloadContentType:;
- (id)payloadHashSHA256;
- (void)setPayloadHashSHA256:;
- (id)payloadCertificatePinningIdentifiers;
- (void)setPayloadCertificatePinningIdentifiers:;
+ (id)allowedPayloadKeys;
+ (id)buildWithDataURL:withContentType:withSize:withHashSHA256:withCertificatePinningIdentifiers:;
+ (id)buildRequiredOnlyWithDataURL:withContentType:withSize:withHashSHA256:;
@end
