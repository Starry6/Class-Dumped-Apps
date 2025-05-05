@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage
@property (nonatomic) NSArray voiceShortcutActions;
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
- (void)clearVoiceShortcutAction;
- (void)deleteVoiceShortcutAction;
- (void)addVoiceShortcutAction:;
- (unsigned long long)voiceShortcutActionCount;
- (id)voiceShortcutActionAtIndex:;
- (id)voiceShortcutActions;
- (void)setVoiceShortcutActions:;
@end
