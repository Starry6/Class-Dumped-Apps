@interface AWDWiFiMetricScanStats : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray scanStats;
- (void)dealloc;
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
- (void)clearScanStats;
- (void)addScanStats:;
- (unsigned long long)scanStatsCount;
- (id)scanStatsAtIndex:;
- (id)scanStats;
- (void)setScanStats:;
+ (Class)scanStatsType;
@end
