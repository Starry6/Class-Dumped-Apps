@interface ModelKeyServerAPISignedKey : PBCodable
@property (nonatomic) BOOL hasData;
@property (nonatomic) NSData data;
- (id)data;
- (void)writeTo:;
- (BOOL)hasData;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setData:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
