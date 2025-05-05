@interface PLUSSchemaPLUSContactSuggestionHeartbeatReported : SISchemaInstrumentationMessage
@property (nonatomic) NSArray suggestionSummaries;
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
- (void)clearSuggestionSummaries;
- (void)deleteSuggestionSummaries;
- (void)addSuggestionSummaries:;
- (unsigned long long)suggestionSummariesCount;
- (id)suggestionSummariesAtIndex:;
- (id)suggestionSummaries;
- (void)setSuggestionSummaries:;
@end
