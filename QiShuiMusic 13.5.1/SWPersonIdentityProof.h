@interface SWPersonIdentityProof : NSObject
@property (nonatomic) NSData publicKey;
@property (nonatomic) Q localKeyIndex;
@property (nonatomic) NSArray inclusionHashes;
@property (nonatomic) Q publicKeyIndex;
- (id)publicKey;
- (void)setPublicKey:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)inclusionHashes;
- (unsigned long long)localKeyIndex;
- (id)initWithInclusionHashes:;
- (id)initWithInclusionHashes:publicKey:localKeyIndex:;
- (unsigned long long)publicKeyIndex;
- (void)setLocalKeyIndex:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
@end
