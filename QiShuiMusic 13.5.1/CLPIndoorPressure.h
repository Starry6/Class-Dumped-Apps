@interface CLPIndoorPressure : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasPressure;
@property (nonatomic) float pressure;
@property (nonatomic) BOOL hasTemperature;
@property (nonatomic) float temperature;
- (float)pressure;
- (void)setPressure:;
- (BOOL)hasPressure;
- (void)setTemperature:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setHasPressure:;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setHasTemperature:;
- (BOOL)hasTemperature;
- (float)temperature;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
