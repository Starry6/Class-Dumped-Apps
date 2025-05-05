@interface NLXSchemaCDMSystemInformed : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID taskId;
@property (nonatomic) BOOL hasTaskId;
@property (nonatomic) NSArray entities;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)entities;
- (void)setEntities:;
- (id)taskId;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearEntities;
- (void)addEntities:;
- (id)entitiesAtIndex:;
- (unsigned long long)entitiesCount;
- (BOOL)hasTaskId;
- (void)setTaskId:;
- (void)deleteTaskId;
- (void)setHasTaskId:;
- (void)deleteEntities;
@end
