@interface IHSchemaIHModelEvaluationEnded : SISchemaInstrumentationMessage
@property (nonatomic) IHSchemaIHScore score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)score;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setScore:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (void)deleteScore;
@end
