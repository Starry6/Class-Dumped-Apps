@interface AWDWiFiMetricsManagerPowerStickiness : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) I enabled;
@property (nonatomic) BOOL hasStickiness;
@property (nonatomic) I stickiness;
- (void)setHasEnabled:;
- (BOOL)hasEnabled;
- (unsigned int)enabled;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setEnabled:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setStickiness:;
- (void)setHasStickiness:;
- (BOOL)hasStickiness;
- (unsigned int)stickiness;
@end
