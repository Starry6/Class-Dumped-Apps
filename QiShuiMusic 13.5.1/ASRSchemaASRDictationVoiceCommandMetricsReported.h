@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) Q commandEndTimeInNs;
@property (nonatomic) BOOL hasCommandEndTimeInNs;
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
- (BOOL)hasVoiceCommandId;
- (void)deleteVoiceCommandId;
- (void)setCommandEndTimeInNs:;
- (BOOL)hasCommandEndTimeInNs;
- (void)setHasCommandEndTimeInNs:;
- (void)deleteCommandEndTimeInNs;
- (id)voiceCommandId;
- (void)setVoiceCommandId:;
- (unsigned long long)commandEndTimeInNs;
- (void)setHasVoiceCommandId:;
@end
