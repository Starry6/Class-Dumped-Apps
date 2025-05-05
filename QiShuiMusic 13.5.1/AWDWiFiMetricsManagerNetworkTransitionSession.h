@interface AWDWiFiMetricsManagerNetworkTransitionSession : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray records;
- (id)records;
- (void)dealloc;
- (void)setRecords:;
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
- (void)clearRecords;
- (void)addRecords:;
- (unsigned long long)recordsCount;
- (id)recordsAtIndex:;
+ (Class)recordsType;
@end
