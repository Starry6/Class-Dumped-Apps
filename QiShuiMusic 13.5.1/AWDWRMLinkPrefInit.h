@interface AWDWRMLinkPrefInit : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasCountWifi;
@property (nonatomic) I countWifi;
@property (nonatomic) BOOL hasCountCellular;
@property (nonatomic) I countCellular;
- (void)writeTo:;
- (unsigned long long)hash;
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
- (void)setCountWifi:;
- (void)setHasCountWifi:;
- (BOOL)hasCountWifi;
- (void)setCountCellular:;
- (void)setHasCountCellular:;
- (BOOL)hasCountCellular;
- (unsigned int)countWifi;
- (unsigned int)countCellular;
@end
