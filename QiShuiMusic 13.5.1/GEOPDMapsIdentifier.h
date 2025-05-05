@interface GEOPDMapsIdentifier : PBCodable
@property (nonatomic) BOOL hasShardedId;
@property (nonatomic) GEOPDShardedId shardedId;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (BOOL)isValidMapsIdentifier;
- (unsigned long long)hash;
- (void)setShardedId:;
- (void)copyTo:;
- (id)shardedId;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasShardedId;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
