@interface GEOPDStorefrontFeature : PBCodable
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasGeometry;
@property (nonatomic) GEOPDOrientedBoundingBox geometry;
- (void)readAll:;
- (id)geometry;
- (void)setGeometry:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (int)StringAsType:;
- (id)initWithDictionary:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (int)type;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasGeometry;
+ (BOOL)isValid:;
@end
