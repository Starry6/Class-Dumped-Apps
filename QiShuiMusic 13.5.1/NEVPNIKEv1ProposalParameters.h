@interface NEVPNIKEv1ProposalParameters : NSObject
@property (nonatomic) q encryptionAlgorithm;
@property (nonatomic) q integrityAlgorithm;
@property (nonatomic) NSInteger diffieHellmanGroup;
@property (nonatomic) NSInteger lifetimeSeconds;
- (BOOL)checkValidityAndCollectErrors:;
- (id)initFromLegacyDictionary:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)copyLegacyDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (int)lifetimeSeconds;
- (void)setLifetimeSeconds:;
- (long long)encryptionAlgorithm;
- (void)setEncryptionAlgorithm:;
- (long long)integrityAlgorithm;
- (void)setIntegrityAlgorithm:;
- (int)diffieHellmanGroup;
- (void)setDiffieHellmanGroup:;
+ (BOOL)supportsSecureCoding;
@end
