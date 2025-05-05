@interface AWDPowerPerProcessCPULoadMetrics : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray loads;
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
- (void)clearLoads;
- (void)addLoad:;
- (unsigned long long)loadsCount;
- (id)loadAtIndex:;
- (id)loads;
- (void)setLoads:;
+ (Class)loadType;
@end
