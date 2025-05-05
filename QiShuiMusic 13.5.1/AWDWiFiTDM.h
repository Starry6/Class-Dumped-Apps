@interface AWDWiFiTDM : PBCodable
@property (nonatomic) NSMutableArray sliceStats;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
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
