@interface NLXSchemaCDMSiriVocabularySpanDataTier1 : SISchemaInstrumentationMessage
@property (nonatomic) I priorOrdinality;
@property (nonatomic) BOOL hasPriorOrdinality;
@property (nonatomic) double priorScore;
@property (nonatomic) BOOL hasPriorScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (double)priorScore;
- (void)setPriorScore:;
- (void)setPriorOrdinality:;
- (BOOL)hasPriorOrdinality;
- (void)setHasPriorOrdinality:;
- (void)deletePriorOrdinality;
- (BOOL)hasPriorScore;
- (void)setHasPriorScore:;
- (void)deletePriorScore;
- (unsigned int)priorOrdinality;
@end
