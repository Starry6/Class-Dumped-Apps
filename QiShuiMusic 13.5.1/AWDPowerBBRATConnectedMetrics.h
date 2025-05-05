@interface AWDPowerBBRATConnectedMetrics : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray rATPowers;
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
- (void)clearRATPowers;
- (void)addRATPower:;
- (unsigned long long)rATPowersCount;
- (id)rATPowerAtIndex:;
- (id)rATPowers;
- (void)setRATPowers:;
+ (Class)rATPowerType;
@end
