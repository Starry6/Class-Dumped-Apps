@interface AWDCoreRoutineAssetVersion : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasContentVersion;
@property (nonatomic) NSInteger contentVersion;
- (int)contentVersion;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setContentVersion:;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasContentVersion;
- (void)setHasContentVersion:;
@end
