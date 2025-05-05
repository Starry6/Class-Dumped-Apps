@interface NLXSchemaCDMSystemReportedSuccess : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID taskId;
@property (nonatomic) BOOL hasTaskId;
@property (nonatomic) USOSchemaUSOGraph task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)task;
- (id)jsonData;
- (unsigned long long)hash;
- (id)taskId;
- (void)setTask:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasTaskId;
- (void)setTaskId:;
- (BOOL)hasTask;
- (void)setHasTask:;
- (void)deleteTask;
- (void)deleteTaskId;
- (void)setHasTaskId:;
@end
