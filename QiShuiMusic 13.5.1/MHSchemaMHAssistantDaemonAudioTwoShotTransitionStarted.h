@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger promptType;
@property (nonatomic) BOOL hasPromptType;
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
- (void)setPromptType:;
- (BOOL)hasPromptType;
- (void)setHasPromptType:;
- (void)deletePromptType;
- (int)promptType;
@end
