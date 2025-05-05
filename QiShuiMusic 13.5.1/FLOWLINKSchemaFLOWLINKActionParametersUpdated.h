@interface FLOWLINKSchemaFLOWLINKActionParametersUpdated : SISchemaInstrumentationMessage
@property (nonatomic) NSArray parameters;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)parameters;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)setParameters:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:;
- (id)parametersAtIndex:;
- (void)deleteParameters;
@end
