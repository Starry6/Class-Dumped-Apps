@interface MHSchemaMHVoiceTriggerSecondPassCancelled : SISchemaInstrumentationMessage
@property (nonatomic) MHSchemaMHVoiceTriggerEventInfo voiceTriggerEventInfo;
@property (nonatomic) BOOL hasVoiceTriggerEventInfo;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)voiceTriggerEventInfo;
- (void)setVoiceTriggerEventInfo:;
- (BOOL)hasVoiceTriggerEventInfo;
- (void)deleteVoiceTriggerEventInfo;
- (void)setHasVoiceTriggerEventInfo:;
@end
