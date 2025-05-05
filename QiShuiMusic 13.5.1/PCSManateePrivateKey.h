@interface PCSManateePrivateKey : PBCodable
@property (nonatomic) BOOL hasPrivateKey;
@property (nonatomic) NSData privateKey;
@property (nonatomic) BOOL hasPublicKeyInfo;
@property (nonatomic) NSData publicKeyInfo;
- (id)privateKey;
- (void)writeTo:;
- (id)publicKeyInfo;
- (void)setPrivateKey:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasPrivateKey;
- (void).cxx_destruct;
- (void)setPublicKeyInfo:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPublicKeyInfo;
@end
