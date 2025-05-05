@interface CEMSecurityCertificatePreferenceDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadName;
@property (nonatomic) NSString payloadCertificateIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadName;
- (void)setPayloadName:;
- (id)payloadCertificateIdentifier;
- (void)setPayloadCertificateIdentifier:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withName:withCertificateIdentifier:;
+ (id)buildRequiredOnlyWithIdentifier:withName:withCertificateIdentifier:;
@end
