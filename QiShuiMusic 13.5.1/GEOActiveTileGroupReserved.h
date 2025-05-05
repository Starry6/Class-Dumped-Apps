@interface GEOActiveTileGroupReserved : PBCodable
@property (nonatomic) BOOL hasAuthToken;
@property (nonatomic) NSString authToken;
@property (nonatomic) PBUnknownFields unknownFields;
- (id)authToken;
- (void)readAll:;
- (void)setAuthToken:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasAuthToken;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
