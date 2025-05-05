@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL suppresedAlert;
@property (nonatomic) BOOL hasSuppresedAlert;
@property (nonatomic) BOOL timedOut;
@property (nonatomic) BOOL hasTimedOut;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setTimedOut:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)hasTimedOut;
- (BOOL)isEqual:;
- (BOOL)timedOut;
- (void)setSuppresedAlert:;
- (BOOL)hasSuppresedAlert;
- (void)setHasSuppresedAlert:;
- (void)deleteSuppresedAlert;
- (void)setHasTimedOut:;
- (void)deleteTimedOut;
- (BOOL)suppresedAlert;
@end
