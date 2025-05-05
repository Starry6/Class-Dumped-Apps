@interface NRPBSwitchRecord : PBCodable
@property (nonatomic) BOOL hasDeviceIDBytes;
@property (nonatomic) NSData deviceIDBytes;
@property (nonatomic) BOOL hasDateTimeInterval;
@property (nonatomic) double dateTimeInterval;
@property (nonatomic) BOOL hasSwitchIndex;
@property (nonatomic) NSInteger switchIndex;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (int)switchIndex;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasDeviceIDBytes;
- (void)setDateTimeInterval:;
- (void)setHasDateTimeInterval:;
- (BOOL)hasDateTimeInterval;
- (void)setSwitchIndex:;
- (void)setHasSwitchIndex:;
- (BOOL)hasSwitchIndex;
- (id)deviceIDBytes;
- (void)setDeviceIDBytes:;
- (double)dateTimeInterval;
@end
