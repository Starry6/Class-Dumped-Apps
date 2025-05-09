@interface LTSchemaSafariFeedbackEvent : SISchemaInstrumentationMessage
@property (nonatomic) LTSchemaTask task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) NSString sessionID;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) NSString userFeedbackContentSource;
@property (nonatomic) BOOL hasUserFeedbackContentSource;
@property (nonatomic) NSString userFeedbackContentTarget;
@property (nonatomic) BOOL hasUserFeedbackContentTarget;
@property (nonatomic) NSData jsonData;
- (void)setSessionID:;
- (id)sessionID;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)task;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setTask:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasSessionID:;
- (BOOL)hasSessionID;
- (BOOL)hasTask;
- (void)setHasTask:;
- (void)deleteTask;
- (void)deleteSessionID;
- (BOOL)hasUserFeedbackContentSource;
- (void)deleteUserFeedbackContentSource;
- (BOOL)hasUserFeedbackContentTarget;
- (void)deleteUserFeedbackContentTarget;
- (id)userFeedbackContentSource;
- (void)setUserFeedbackContentSource:;
- (id)userFeedbackContentTarget;
- (void)setUserFeedbackContentTarget:;
- (void)setHasUserFeedbackContentSource:;
- (void)setHasUserFeedbackContentTarget:;
@end
