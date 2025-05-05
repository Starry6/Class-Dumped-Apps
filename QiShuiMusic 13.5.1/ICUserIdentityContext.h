@interface ICUserIdentityContext : NSObject
@property (nonatomic) ICUserIdentity identity;
@property (nonatomic) ICUserIdentityStore identityStore;
- (id)identityStore;
- (id)identity;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithIdentity:identityStore:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
