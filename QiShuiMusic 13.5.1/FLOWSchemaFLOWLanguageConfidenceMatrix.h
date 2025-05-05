@interface FLOWSchemaFLOWLanguageConfidenceMatrix : SISchemaInstrumentationMessage
@property (nonatomic) NSArray languageConfidenceArrays;
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
- (void)clearLanguageConfidenceArrays;
- (void)deleteLanguageConfidenceArrays;
- (void)addLanguageConfidenceArrays:;
- (unsigned long long)languageConfidenceArraysCount;
- (id)languageConfidenceArraysAtIndex:;
- (id)languageConfidenceArrays;
- (void)setLanguageConfidenceArrays:;
@end
