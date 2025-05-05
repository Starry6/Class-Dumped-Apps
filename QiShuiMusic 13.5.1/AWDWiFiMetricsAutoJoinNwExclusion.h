@interface AWDWiFiMetricsAutoJoinNwExclusion : PBCodable
@property (nonatomic) BOOL hasReasonCode;
@property (nonatomic) I reasonCode;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) NSInteger rssi;
@property (nonatomic) BOOL hasUsageRank;
@property (nonatomic) I usageRank;
- (int)rssi;
- (unsigned int)usageRank;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setRssi:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setUsageRank:;
- (BOOL)readFrom:;
- (void)setReasonCode:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)reasonCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasRssi:;
- (BOOL)hasRssi;
- (void)setHasReasonCode:;
- (BOOL)hasReasonCode;
- (void)setHasUsageRank:;
- (BOOL)hasUsageRank;
@end
