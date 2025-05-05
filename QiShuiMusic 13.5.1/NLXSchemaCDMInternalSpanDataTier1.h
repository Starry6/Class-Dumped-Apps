@interface NLXSchemaCDMInternalSpanDataTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NLXSchemaCDMSiriVocabularySpanDataTier1 siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
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
- (BOOL)hasSiriVocabularySpanData;
- (void)deleteSiriVocabularySpanData;
- (id)siriVocabularySpanData;
- (void)setSiriVocabularySpanData:;
- (void)setHasSiriVocabularySpanData:;
@end
