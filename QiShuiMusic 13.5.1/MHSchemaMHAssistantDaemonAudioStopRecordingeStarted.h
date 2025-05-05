@interface MHSchemaMHAssistantDaemonAudioStopRecordingeStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger stopReason;
@property (nonatomic) BOOL hasStopReason;
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
- (void)setStopReason:;
- (BOOL)hasStopReason;
- (void)setHasStopReason:;
- (void)deleteStopReason;
- (int)stopReason;
@end
