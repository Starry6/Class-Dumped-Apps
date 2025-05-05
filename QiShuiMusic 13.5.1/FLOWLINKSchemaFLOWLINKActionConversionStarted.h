@interface FLOWLINKSchemaFLOWLINKActionConversionStarted : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID parseHypothesisId;
@property (nonatomic) BOOL hasParseHypothesisId;
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
- (void)setParseHypothesisId:;
- (id)parseHypothesisId;
- (void)deleteParseHypothesisId;
- (BOOL)hasParseHypothesisId;
- (void)setHasParseHypothesisId:;
@end
