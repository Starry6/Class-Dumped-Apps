@interface AWDWiFiMetricsManagerRCU1CoexModeChange : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasChannelNum;
@property (nonatomic) I channelNum;
@property (nonatomic) BOOL hasOnWifiMode;
@property (nonatomic) I onWifiMode;
@property (nonatomic) BOOL hasOffWifiMode;
@property (nonatomic) I offWifiMode;
@property (nonatomic) BOOL hasOnAirplayMode;
@property (nonatomic) BOOL onAirplayMode;
@property (nonatomic) BOOL hasOffAirplayMode;
@property (nonatomic) BOOL offAirplayMode;
@property (nonatomic) BOOL hasPowerOnDuration;
@property (nonatomic) Q powerOnDuration;
@property (nonatomic) BOOL hasDisableDuration;
@property (nonatomic) Q disableDuration;
@property (nonatomic) BOOL hasDenyDuration;
@property (nonatomic) Q denyDuration;
@property (nonatomic) BOOL hasTddDuration;
@property (nonatomic) Q tddDuration;
@property (nonatomic) BOOL hasFwDenyCount;
@property (nonatomic) I fwDenyCount;
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
- (void)setChannelNum:;
- (void)setHasChannelNum:;
- (BOOL)hasChannelNum;
- (void)setOnWifiMode:;
- (void)setHasOnWifiMode:;
- (BOOL)hasOnWifiMode;
- (void)setOffWifiMode:;
- (void)setHasOffWifiMode:;
- (BOOL)hasOffWifiMode;
- (void)setOnAirplayMode:;
- (void)setHasOnAirplayMode:;
- (BOOL)hasOnAirplayMode;
- (void)setOffAirplayMode:;
- (void)setHasOffAirplayMode:;
- (BOOL)hasOffAirplayMode;
- (void)setPowerOnDuration:;
- (void)setHasPowerOnDuration:;
- (BOOL)hasPowerOnDuration;
- (void)setDisableDuration:;
- (void)setHasDisableDuration:;
- (BOOL)hasDisableDuration;
- (void)setDenyDuration:;
- (void)setHasDenyDuration:;
- (BOOL)hasDenyDuration;
- (void)setTddDuration:;
- (void)setHasTddDuration:;
- (BOOL)hasTddDuration;
- (void)setFwDenyCount:;
- (void)setHasFwDenyCount:;
- (BOOL)hasFwDenyCount;
- (unsigned int)channelNum;
- (unsigned int)onWifiMode;
- (unsigned int)offWifiMode;
- (BOOL)onAirplayMode;
- (BOOL)offAirplayMode;
- (unsigned long long)powerOnDuration;
- (unsigned long long)disableDuration;
- (unsigned long long)denyDuration;
- (unsigned long long)tddDuration;
- (unsigned int)fwDenyCount;
@end
