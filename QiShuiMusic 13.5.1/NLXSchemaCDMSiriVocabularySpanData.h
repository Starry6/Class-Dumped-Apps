@interface NLXSchemaCDMSiriVocabularySpanData : SISchemaInstrumentationMessage
@property (nonatomic) double matchScore;
@property (nonatomic) BOOL hasMatchScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (double)matchScore;
- (void)setMatchScore:;
- (BOOL)hasMatchScore;
- (void)setHasMatchScore:;
- (void)deleteMatchScore;
@end
