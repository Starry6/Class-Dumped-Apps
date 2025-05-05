@interface AWDWiFiMetricsManagerLinkQualityStats : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray statRecords;
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
- (void)clearStatRecords;
- (void)addStatRecord:;
- (unsigned long long)statRecordsCount;
- (id)statRecordAtIndex:;
- (id)statRecords;
- (void)setStatRecords:;
+ (Class)statRecordType;
@end
