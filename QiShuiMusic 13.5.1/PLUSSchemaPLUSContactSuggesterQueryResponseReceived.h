@interface PLUSSchemaPLUSContactSuggesterQueryResponseReceived : SISchemaInstrumentationMessage
@property (nonatomic) NSArray results;
@property (nonatomic) BOOL hasMatchingResults;
@property (nonatomic) BOOL hasHasMatchingResults;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)resultsCount;
- (id)jsonData;
- (unsigned long long)hash;
- (void)addResults:;
- (void)clearResults;
- (id)results;
- (id)resultsAtIndex:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setResults:;
- (void)deleteResults;
- (void)setHasMatchingResults:;
- (BOOL)hasHasMatchingResults;
- (void)setHasHasMatchingResults:;
- (void)deleteHasMatchingResults;
- (BOOL)hasMatchingResults;
@end
