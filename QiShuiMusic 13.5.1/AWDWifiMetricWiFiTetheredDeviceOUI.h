@interface AWDWifiMetricWiFiTetheredDeviceOUI : PBCodable
@property (nonatomic) BOOL hasTetheredOUI;
@property (nonatomic) NSData tetheredOUI;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
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
- (BOOL)hasTetheredOUI;
- (id)tetheredOUI;
- (void)setTetheredOUI:;
@end
