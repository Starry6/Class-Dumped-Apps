@interface SWPersonIdentity : NSObject
@property (nonatomic) NSArray publicKeys;
@property (nonatomic) NSData trackingPreventionSalt;
@property (nonatomic) NSData rootHash;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)rootHash;
- (id)publicKeys;
- (id)trackingPreventionSalt;
- (id)initWithRootHash:publicKeys:trackingPreventionSalt:;
- (id)initWithRootHash:;
- (BOOL)isEqualToPersonIdentity:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
@end
