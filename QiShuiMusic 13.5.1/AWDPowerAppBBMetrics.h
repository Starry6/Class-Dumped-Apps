@interface AWDPowerAppBBMetrics : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray appPowers;
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
- (void)clearAppPowers;
- (void)addAppPower:;
- (unsigned long long)appPowersCount;
- (id)appPowerAtIndex:;
- (id)appPowers;
- (void)setAppPowers:;
+ (Class)appPowerType;
@end
