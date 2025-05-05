@interface GEOIncidentOnRouteInfo : PBCodable
@property (nonatomic) NSMutableArray indexAndOffsets;
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
- (id)indexAndOffsets;
- (void)setIndexAndOffsets:;
- (void)clearIndexAndOffsets;
- (void)addIndexAndOffset:;
- (unsigned long long)indexAndOffsetsCount;
- (id)indexAndOffsetAtIndex:;
+ (BOOL)isValid:;
+ (Class)indexAndOffsetType;
@end
