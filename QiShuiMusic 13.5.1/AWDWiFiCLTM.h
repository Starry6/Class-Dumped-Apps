@interface AWDWiFiCLTM : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray sliceStats;
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
- (void)clearSliceStats;
- (void)addSliceStats:;
- (unsigned long long)sliceStatsCount;
- (id)sliceStatsAtIndex:;
- (id)sliceStats;
- (void)setSliceStats:;
+ (Class)sliceStatsType;
@end
