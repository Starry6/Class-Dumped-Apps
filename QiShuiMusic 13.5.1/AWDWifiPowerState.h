@interface AWDWifiPowerState : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasPowerState;
@property (nonatomic) BOOL powerState;
- (BOOL)powerState;
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
- (void)setPowerState:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPowerState;
- (void)setHasPowerState:;
@end
