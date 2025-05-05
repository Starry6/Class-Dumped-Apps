@interface NRPBCompressedData : PBCodable
@property (nonatomic) BOOL hasCompressed;
@property (nonatomic) BOOL compressed;
@property (nonatomic) BOOL hasPossiblyCompressedData;
@property (nonatomic) NSData possiblyCompressedData;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setCompressed:;
- (id)dictionaryRepresentation;
- (BOOL)compressed;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCompressed:;
- (BOOL)hasCompressed;
- (BOOL)hasPossiblyCompressedData;
- (id)possiblyCompressedData;
- (void)setPossiblyCompressedData:;
@end
