@interface MHSchemaMHVoiceTriggerSecondPassRejected : SISchemaInstrumentationMessage
@property (nonatomic) MHSchemaMHVoiceTriggerEventInfo voiceTriggerEventInfo;
@property (nonatomic) BOOL hasVoiceTriggerEventInfo;
@property (nonatomic) NSInteger reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)reason;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setReason:;
- (BOOL)hasReason;
- (void)setHasReason:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteReason;
- (id)voiceTriggerEventInfo;
- (void)setVoiceTriggerEventInfo:;
- (BOOL)hasVoiceTriggerEventInfo;
- (void)deleteVoiceTriggerEventInfo;
- (void)setHasVoiceTriggerEventInfo:;
@end
