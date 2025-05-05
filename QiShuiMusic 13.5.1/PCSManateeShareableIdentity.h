@interface PCSManateeShareableIdentity : PBCodable
@property (nonatomic) BOOL hasEncryptionPrivateKey;
@property (nonatomic) PCSManateePrivateKey encryptionPrivateKey;
@property (nonatomic) BOOL hasSigningPrivateKey;
@property (nonatomic) PCSManateePrivateKey signingPrivateKey;
- (id)encryptionPrivateKey;
- (void)setSigningPrivateKey:;
- (id)signingPrivateKey;
- (void)setEncryptionPrivateKey:;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasSigningPrivateKey;
- (BOOL)hasEncryptionPrivateKey;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
