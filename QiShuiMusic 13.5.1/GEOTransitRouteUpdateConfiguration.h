@interface GEOTransitRouteUpdateConfiguration : PBCodable
@property (nonatomic) BOOL hasTtlSeconds;
@property (nonatomic) Q ttlSeconds;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)ttlSeconds;
- (void)setTtlSeconds:;
- (void)setHasTtlSeconds:;
- (BOOL)hasTtlSeconds;
+ (BOOL)isValid:;
@end
