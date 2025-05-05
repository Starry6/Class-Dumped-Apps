@interface FLOWLINKSchemaFLOWLINKActionPromptForValueStarted : SISchemaInstrumentationMessage
@property (nonatomic) FLOWLINKSchemaFLOWLINKActionParameter parameter;
@property (nonatomic) BOOL hasParameter;
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
- (id)parameter;
- (BOOL)hasParameter;
- (void)deleteParameter;
- (void)setParameter:;
- (void)setHasParameter:;
@end
