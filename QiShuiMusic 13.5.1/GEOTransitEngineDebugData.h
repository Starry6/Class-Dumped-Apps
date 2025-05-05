@interface GEOTransitEngineDebugData : PBCodable
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (double)score;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setScore:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
