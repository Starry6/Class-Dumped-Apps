@interface NLXSchemaCDMUserCancelled : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID taskId;
@property (nonatomic) BOOL hasTaskId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)taskId;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasTaskId;
- (void)setTaskId:;
- (void)deleteTaskId;
- (void)setHasTaskId:;
@end
