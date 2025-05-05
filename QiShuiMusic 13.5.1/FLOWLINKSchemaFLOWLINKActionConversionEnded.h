@interface FLOWLINKSchemaFLOWLINKActionConversionEnded : SISchemaInstrumentationMessage
@property (nonatomic) FLOWLINKSchemaFLOWLINKAction action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)action;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setAction:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)deleteAction;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasAction;
- (void)setHasAction:;
@end
