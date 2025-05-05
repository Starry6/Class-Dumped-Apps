@interface GEONonTiledMaterial : PBCodable
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) GEONonTiledInfo info;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)setInfo:;
- (id)initWithDictionary:;
- (BOOL)hasInfo;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)info;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
