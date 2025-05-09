@interface TKTokenKeychainKey : TKTokenKeychainItem
@property (nonatomic) Q keyUsage;
@property (nonatomic) NSString keyType;
@property (nonatomic) NSData applicationTag;
@property (nonatomic) q keySizeInBits;
@property (nonatomic) NSData publicKeyData;
@property (nonatomic) NSData publicKeyHash;
@property (nonatomic) BOOL canDecrypt;
@property (nonatomic) BOOL canSign;
@property (nonatomic) BOOL canPerformKeyExchange;
@property (nonatomic) BOOL suitableForLogin;
- (id)keychainAttributes;
- (void).cxx_destruct;
- (id)keyType;
- (id)publicKeyHash;
- (void)setPublicKeyHash:;
- (id)publicKeyData;
- (void)setKeyType:;
- (unsigned long long)keyUsage;
- (id)initWithItemInfo:;
- (id)encodedObjectID;
- (id)initWithCertificate:objectID:;
- (void)createConstraints:;
- (BOOL)satisfiesKeyUsage:;
- (id)applicationTag;
- (void)setApplicationTag:;
- (long long)keySizeInBits;
- (void)setKeySizeInBits:;
- (void)setPublicKeyData:;
- (BOOL)canDecrypt;
- (void)setCanDecrypt:;
- (BOOL)canSign;
- (void)setCanSign:;
- (BOOL)canPerformKeyExchange;
- (void)setCanPerformKeyExchange:;
- (BOOL)isSuitableForLogin;
- (void)setSuitableForLogin:;
@end
