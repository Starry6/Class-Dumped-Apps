@interface GEORPProblemOptInResponse : PBCodable
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) NSInteger statusCode;
- (void)readAll:;
- (void)setStatusCode:;
- (int)statusCode;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasStatusCode:;
- (BOOL)hasStatusCode;
- (id)statusCodeAsString:;
- (int)StringAsStatusCode:;
+ (BOOL)isValid:;
@end
