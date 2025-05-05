@interface IDSAccountIdentity : NSObject
@property (nonatomic) IDSMPFullAccountIdentityCluster identityCluster;
@property (nonatomic) IDSMPFullAccountIdentity accountIdentity;
@property (nonatomic) IDSMPFullServiceIdentityAdmin adminIdentity;
@property (nonatomic) IDSMPFullServiceIdentitySigning signingIdentity;
@property (nonatomic) IDSPublicAccountIdentity accountPublicKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)signingIdentity;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)accountIdentity;
- (id)copyWithZone:;
- (id)adminIdentity;
- (id)accountPublicKey;
- (id)initWithFullCluster:;
- (id)identityCluster;
+ (BOOL)supportsSecureCoding;
@end
