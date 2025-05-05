@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaVoiceTriggerMetrics voiceTrigger;
@property (nonatomic) BOOL hasVoiceTrigger;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)voiceTrigger;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (void)setVoiceTrigger:;
- (BOOL)isEqual:;
- (BOOL)hasVoiceTrigger;
- (void)deleteVoiceTrigger;
- (void)setHasVoiceTrigger:;
@end
