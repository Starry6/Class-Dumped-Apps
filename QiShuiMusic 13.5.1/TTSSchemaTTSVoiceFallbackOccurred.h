@interface TTSSchemaTTSVoiceFallbackOccurred : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaVoiceSettings voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
@property (nonatomic) TTSSchemaTTSVoiceContext context;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) NSData jsonData;
- (BOOL)hasContext;
- (id)initWithJSON:;
- (id)context;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteContext;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)setHasContext:;
- (id)dictionaryRepresentation;
- (void)setContext:;
- (BOOL)isEqual:;
- (void)setVoiceSettings:;
- (id)voiceSettings;
- (BOOL)hasVoiceSettings;
- (void)deleteVoiceSettings;
- (void)setHasVoiceSettings:;
@end
