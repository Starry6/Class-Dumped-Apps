@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase
@property (nonatomic) NSString payloadEncryptionAlgorithm;
@property (nonatomic) NSString payloadIntegrityAlgorithm;
@property (nonatomic) NSNumber payloadDiffieHellmanGroup;
@property (nonatomic) NSNumber payloadLifeTimeInMinutes;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadEncryptionAlgorithm;
- (void)setPayloadEncryptionAlgorithm:;
- (id)payloadIntegrityAlgorithm;
- (void)setPayloadIntegrityAlgorithm:;
- (id)payloadDiffieHellmanGroup;
- (void)setPayloadDiffieHellmanGroup:;
- (id)payloadLifeTimeInMinutes;
- (void)setPayloadLifeTimeInMinutes:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithEncryptionAlgorithm:withIntegrityAlgorithm:withDiffieHellmanGroup:withLifeTimeInMinutes:;
@end
