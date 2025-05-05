@interface FLOWLINKSchemaFLOWLinkActionStarted : SISchemaInstrumentationMessage
@property (nonatomic) FLOWLINKSchemaFLOWLINKAction currentAction;
@property (nonatomic) BOOL hasCurrentAction;
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
- (id)currentAction;
- (void)setCurrentAction:;
- (BOOL)hasCurrentAction;
- (void)deleteCurrentAction;
- (void)setHasCurrentAction:;
@end
