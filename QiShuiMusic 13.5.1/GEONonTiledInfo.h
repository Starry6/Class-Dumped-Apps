@interface GEONonTiledInfo : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) Q muid;
- (void)setHasMuid:;
- (BOOL)hasMuid;
- (void)setMuid:;
- (void)readAll:;
- (void)setName:;
- (id)initWithJSON:;
- (BOOL)hasName;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)muid;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
