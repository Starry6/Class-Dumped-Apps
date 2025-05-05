@interface IDSPublicAccountIdentity : NSObject
@property (nonatomic) IDSMPPublicAccountIdentity accountIdentity;
@property (nonatomic) IDSMPPublicServiceIdentityAdmin adminIdentity;
@property (nonatomic) IDSMPPublicServiceIdentitySigning signingIdentity;
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
- (id)initWithAccountIdentity:adminIdentity:signingIdentity:;
- (id)adminIdentity;
+ (BOOL)supportsSecureCoding;
@end
