@interface HALSchemaHALAlarmContext : SISchemaInstrumentationMessage
@property (nonatomic) Q timeSinceAlarmFiredInSeconds;
@property (nonatomic) BOOL hasTimeSinceAlarmFiredInSeconds;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setTimeSinceAlarmFiredInSeconds:;
- (BOOL)hasTimeSinceAlarmFiredInSeconds;
- (void)setHasTimeSinceAlarmFiredInSeconds:;
- (void)deleteTimeSinceAlarmFiredInSeconds;
- (unsigned long long)timeSinceAlarmFiredInSeconds;
@end
