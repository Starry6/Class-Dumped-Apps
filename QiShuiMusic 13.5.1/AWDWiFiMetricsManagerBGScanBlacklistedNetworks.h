@interface AWDWiFiMetricsManagerBGScanBlacklistedNetworks : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasInterfaceName;
@property (nonatomic) NSString interfaceName;
@property (nonatomic) NSMutableArray blacklistingHistorys;
- (void)dealloc;
- (void)setInterfaceName:;
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
- (id)interfaceName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasInterfaceName;
- (void)clearBlacklistingHistorys;
- (void)addBlacklistingHistory:;
- (unsigned long long)blacklistingHistorysCount;
- (id)blacklistingHistoryAtIndex:;
- (id)blacklistingHistorys;
- (void)setBlacklistingHistorys:;
+ (Class)blacklistingHistoryType;
@end
