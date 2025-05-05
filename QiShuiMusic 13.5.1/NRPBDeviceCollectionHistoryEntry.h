@interface NRPBDeviceCollectionHistoryEntry : PBCodable
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) q index;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasDiff;
@property (nonatomic) NRPBDeviceCollectionDiff diff;
- (BOOL)hasDate;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (double)date;
- (long long)index;
- (void)mergeFrom:;
- (id)diff;
- (void)setIndex:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setDate:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setHasDate:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasIndex:;
- (BOOL)hasIndex;
- (BOOL)hasDiff;
- (void)setDiff:;
@end
