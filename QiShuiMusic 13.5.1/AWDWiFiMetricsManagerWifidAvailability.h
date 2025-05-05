@interface AWDWiFiMetricsManagerWifidAvailability : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasWifidBootTimeDiff;
@property (nonatomic) double wifidBootTimeDiff;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) I pid;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (unsigned int)pid;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setPid:;
- (id)copyWithZone:;
- (BOOL)hasPid;
- (void)setHasPid:;
- (void)setWifidBootTimeDiff:;
- (void)setHasWifidBootTimeDiff:;
- (BOOL)hasWifidBootTimeDiff;
- (double)wifidBootTimeDiff;
@end
