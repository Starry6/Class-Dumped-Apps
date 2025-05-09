@interface GEOTimeCheckpoints : PBCodable
@property (nonatomic) Q distToNextCheckpointsCount;
@property (nonatomic) ^I distToNextCheckpoints;
@property (nonatomic) Q timeToNextCheckpointsCount;
@property (nonatomic) ^I timeToNextCheckpoints;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)distToNextCheckpointsCount;
- (id)distToNextCheckpoints;
- (void)clearDistToNextCheckpoints;
- (void)addDistToNextCheckpoint:;
- (unsigned int)distToNextCheckpointAtIndex:;
- (void)setDistToNextCheckpoints:count:;
- (unsigned long long)timeToNextCheckpointsCount;
- (id)timeToNextCheckpoints;
- (void)clearTimeToNextCheckpoints;
- (void)addTimeToNextCheckpoint:;
- (unsigned int)timeToNextCheckpointAtIndex:;
- (void)setTimeToNextCheckpoints:count:;
+ (BOOL)isValid:;
@end
