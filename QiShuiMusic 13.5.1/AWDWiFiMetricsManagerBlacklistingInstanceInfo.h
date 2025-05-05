@interface AWDWiFiMetricsManagerBlacklistingInstanceInfo : PBCodable
@property (nonatomic) BOOL hasBlacklistingReason;
@property (nonatomic) I blacklistingReason;
@property (nonatomic) BOOL hasBlacklistingTimestamp;
@property (nonatomic) Q blacklistingTimestamp;
@property (nonatomic) BOOL hasReservedInfo;
@property (nonatomic) I reservedInfo;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setBlacklistingReason:;
- (void)setHasBlacklistingReason:;
- (BOOL)hasBlacklistingReason;
- (void)setBlacklistingTimestamp:;
- (void)setHasBlacklistingTimestamp:;
- (BOOL)hasBlacklistingTimestamp;
- (void)setReservedInfo:;
- (void)setHasReservedInfo:;
- (BOOL)hasReservedInfo;
- (unsigned int)blacklistingReason;
- (unsigned long long)blacklistingTimestamp;
- (unsigned int)reservedInfo;
@end
