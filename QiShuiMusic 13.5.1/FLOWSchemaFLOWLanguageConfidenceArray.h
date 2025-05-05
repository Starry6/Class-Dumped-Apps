@interface FLOWSchemaFLOWLanguageConfidenceArray : SISchemaInstrumentationMessage
@property (nonatomic) NSArray languageConfidences;
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
- (void)clearLanguageConfidences;
- (void)deleteLanguageConfidences;
- (void)addLanguageConfidences:;
- (unsigned long long)languageConfidencesCount;
- (id)languageConfidencesAtIndex:;
- (id)languageConfidences;
- (void)setLanguageConfidences:;
@end
