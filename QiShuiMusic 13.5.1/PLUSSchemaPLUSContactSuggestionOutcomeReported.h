@interface PLUSSchemaPLUSContactSuggestionOutcomeReported : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) NSInteger contactSuggestionOutcome;
@property (nonatomic) BOOL hasContactSuggestionOutcome;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suggestionId;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setSuggestionId:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasSuggestionId;
- (void)deleteSuggestionId;
- (void)setHasSuggestionId:;
- (void)setContactSuggestionOutcome:;
- (BOOL)hasContactSuggestionOutcome;
- (void)setHasContactSuggestionOutcome:;
- (void)deleteContactSuggestionOutcome;
- (int)contactSuggestionOutcome;
@end
