@interface TTSSchemaTTSClientSpeechContext : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID contextId;
@property (nonatomic) BOOL hasContextId;
@property (nonatomic) TTSSchemaTTSSpeechStarted startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (nonatomic) TTSSchemaTTSSpeechEnded ended;
@property (nonatomic) BOOL hasEnded;
@property (nonatomic) TTSSchemaTTSSpeechFailed failed;
@property (nonatomic) BOOL hasFailed;
@property (nonatomic) TTSSchemaTTSSpeechCancelled cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichContextevent;
- (id)cancelled;
- (void)setCancelled:;
- (void)setContextId:;
- (id)contextId;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasFailed;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (id)failed;
- (BOOL)isEqual:;
- (BOOL)hasEnded;
- (void)setStartedOrChanged:;
- (id)startedOrChanged;
- (id)ended;
- (void)setEnded:;
- (void)setHasCancelled:;
- (BOOL)hasCancelled;
- (void)setFailed:;
- (void)setHasEnded:;
- (void)setHasStartedOrChanged:;
- (void)deleteStartedOrChanged;
- (void)deleteEnded;
- (void)deleteFailed;
- (unsigned long long)whichContextevent;
- (BOOL)hasStartedOrChanged;
- (void)setHasFailed:;
- (void)deleteCancelled;
- (BOOL)hasContextId;
- (void)deleteContextId;
- (void)setHasContextId:;
@end
