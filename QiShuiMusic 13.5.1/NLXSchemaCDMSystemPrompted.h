@interface NLXSchemaCDMSystemPrompted : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID taskId;
@property (nonatomic) BOOL hasTaskId;
@property (nonatomic) USOSchemaUSOGraph target;
@property (nonatomic) BOOL hasTarget;
@property (nonatomic) NSData jsonData;
- (BOOL)hasTarget;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)taskId;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)target;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasTarget:;
- (BOOL)hasTaskId;
- (void)setTaskId:;
- (void)deleteTaskId;
- (void)setHasTaskId:;
- (void)deleteTarget;
@end
