@interface MHSchemaMHAssistantDaemonAudioStopRecordingEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSArray fanInfos;
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
- (void)clearFanInfo;
- (void)deleteFanInfo;
- (void)addFanInfo:;
- (unsigned long long)fanInfoCount;
- (id)fanInfoAtIndex:;
- (id)fanInfos;
- (void)setFanInfos:;
@end
