@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSArray queryResults;
@property (nonatomic) NSInteger outcome;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)addQueryResults:;
- (void)clearQueryResults;
- (id)jsonData;
- (unsigned long long)hash;
- (unsigned long long)queryResultsCount;
- (void)setQueryResults:;
- (int)outcome;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (id)queryResults;
- (id)queryResultsAtIndex:;
- (BOOL)isEqual:;
- (void)setOutcome:;
- (void)deleteQueryResults;
- (BOOL)hasOutcome;
- (void)setHasOutcome:;
- (void)deleteOutcome;
@end
