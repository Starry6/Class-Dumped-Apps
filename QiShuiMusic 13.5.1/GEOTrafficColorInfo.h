@interface GEOTrafficColorInfo : PBCodable
@property (nonatomic) NSMutableArray trafficColorAndOffsets;
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
- (id)trafficColorAndOffsets;
- (void)setTrafficColorAndOffsets:;
- (void)clearTrafficColorAndOffsets;
- (void)addTrafficColorAndOffset:;
- (unsigned long long)trafficColorAndOffsetsCount;
- (id)trafficColorAndOffsetAtIndex:;
+ (BOOL)isValid:;
+ (Class)trafficColorAndOffsetType;
@end
