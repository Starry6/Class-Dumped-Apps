@interface HALSchemaHALTimerContext : SISchemaInstrumentationMessage
@property (nonatomic) Q timeSinceTimerFiredInSeconds;
@property (nonatomic) BOOL hasTimeSinceTimerFiredInSeconds;
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
- (void)setTimeSinceTimerFiredInSeconds:;
- (BOOL)hasTimeSinceTimerFiredInSeconds;
- (void)setHasTimeSinceTimerFiredInSeconds:;
- (void)deleteTimeSinceTimerFiredInSeconds;
- (unsigned long long)timeSinceTimerFiredInSeconds;
@end
