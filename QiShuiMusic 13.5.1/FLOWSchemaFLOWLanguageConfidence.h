@interface FLOWSchemaFLOWLanguageConfidence : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger languageCode;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) Q confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) NSData jsonData;
- (void)setLanguageCode:;
- (BOOL)hasLanguageCode;
- (int)languageCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned long long)confidenceScore;
- (void)setConfidenceScore:;
- (void)setHasConfidenceScore:;
- (BOOL)hasConfidenceScore;
- (void)deleteConfidenceScore;
- (void)setHasLanguageCode:;
- (void)deleteLanguageCode;
@end
