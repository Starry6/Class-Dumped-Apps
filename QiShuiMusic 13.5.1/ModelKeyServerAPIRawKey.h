@interface ModelKeyServerAPIRawKey : PBCodable
@property (nonatomic) BOOL hasEncryptionKey;
@property (nonatomic) NSData encryptionKey;
@property (nonatomic) BOOL hasEncryptionIv;
@property (nonatomic) NSData encryptionIv;
- (void)setEncryptionKey:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)encryptionKey;
- (id)copyWithZone:;
- (BOOL)hasEncryptionKey;
- (BOOL)hasEncryptionIv;
- (id)encryptionIv;
- (void)setEncryptionIv:;
@end
