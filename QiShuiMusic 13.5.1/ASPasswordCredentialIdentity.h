@interface ASPasswordCredentialIdentity : NSObject
@property (nonatomic) SFExternalCredentialIdentityStoreIdentifier credentialIdentityStoreIdentifier;
@property (nonatomic) ASCredentialServiceIdentifier serviceIdentifier;
@property (nonatomic) NSString user;
@property (nonatomic) NSString recordIdentifier;
@property (nonatomic) q rank;
- (id)recordIdentifier;
- (id)serviceIdentifier;
- (id)initWithCoder:;
- (long long)rank;
- (void)encodeWithCoder:;
- (id)user;
- (void).cxx_destruct;
- (id)description;
- (void)setRank:;
- (id)copyWithZone:;
- (id)_initWithFoundationCredentialIdentity:;
- (id)credentialIdentityStoreIdentifier;
- (id)initWithServiceIdentifier:user:recordIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)identityWithServiceIdentifier:user:recordIdentifier:;
@end
