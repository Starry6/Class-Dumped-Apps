@interface NEVPNIKEv2SecurityAssociationParameters : NSObject
@property (nonatomic) q encryptionAlgorithm;
@property (nonatomic) q integrityAlgorithm;
@property (nonatomic) q diffieHellmanGroup;
@property (nonatomic) NSInteger lifetimeMinutes;
- (BOOL)checkValidityAndCollectErrors:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (long long)encryptionAlgorithm;
- (void)setEncryptionAlgorithm:;
- (long long)integrityAlgorithm;
- (void)setIntegrityAlgorithm:;
- (long long)diffieHellmanGroup;
- (void)setDiffieHellmanGroup:;
- (int)lifetimeMinutes;
- (void)setLifetimeMinutes:;
+ (BOOL)supportsSecureCoding;
@end
