@interface AWDWiFiMetricsManagerDeviceCount : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDeviceCount;
@property (nonatomic) I deviceCount;
@property (nonatomic) BOOL hasTimeSinceBoot;
@property (nonatomic) double timeSinceBoot;
@property (nonatomic) BOOL hasDeviceIdentifierMap;
@property (nonatomic) I deviceIdentifierMap;
@property (nonatomic) BOOL hasDeviceInitFailureReason;
@property (nonatomic) I deviceInitFailureReason;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setHasDeviceCount:;
- (void)setDeviceCount:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)deviceCount;
- (BOOL)isEqual:;
- (BOOL)hasDeviceCount;
- (id)copyWithZone:;
- (void)setTimeSinceBoot:;
- (void)setHasTimeSinceBoot:;
- (BOOL)hasTimeSinceBoot;
- (void)setDeviceIdentifierMap:;
- (void)setHasDeviceIdentifierMap:;
- (BOOL)hasDeviceIdentifierMap;
- (void)setDeviceInitFailureReason:;
- (void)setHasDeviceInitFailureReason:;
- (BOOL)hasDeviceInitFailureReason;
- (double)timeSinceBoot;
- (unsigned int)deviceIdentifierMap;
- (unsigned int)deviceInitFailureReason;
@end
