@interface PLUSSchemaPLUSContactSuggestionGenerated : SISchemaInstrumentationMessage
@property (nonatomic) PLUSSchemaPLUSContactSuggestion generatedSuggestion;
@property (nonatomic) BOOL hasGeneratedSuggestion;
@property (nonatomic) BOOL isSuggestionUpdated;
@property (nonatomic) BOOL hasIsSuggestionUpdated;
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
- (BOOL)hasGeneratedSuggestion;
- (void)deleteGeneratedSuggestion;
- (void)setIsSuggestionUpdated:;
- (BOOL)hasIsSuggestionUpdated;
- (void)setHasIsSuggestionUpdated:;
- (void)deleteIsSuggestionUpdated;
- (id)generatedSuggestion;
- (void)setGeneratedSuggestion:;
- (BOOL)isSuggestionUpdated;
- (void)setHasGeneratedSuggestion:;
@end
