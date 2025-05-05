@interface HALSchemaHALVoiceTriggerContext : SISchemaInstrumentationMessage
@property (nonatomic) Q timeSinceVoiceTriggerHeardInSeconds;
@property (nonatomic) BOOL hasTimeSinceVoiceTriggerHeardInSeconds;
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
- (void)setTimeSinceVoiceTriggerHeardInSeconds:;
- (BOOL)hasTimeSinceVoiceTriggerHeardInSeconds;
- (void)setHasTimeSinceVoiceTriggerHeardInSeconds:;
- (void)deleteTimeSinceVoiceTriggerHeardInSeconds;
- (unsigned long long)timeSinceVoiceTriggerHeardInSeconds;
@end
