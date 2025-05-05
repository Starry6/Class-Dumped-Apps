@interface EXPSearchSchemaEXPSearchSessionExperiments : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID searchSessionId;
@property (nonatomic) BOOL hasSearchSessionId;
@property (nonatomic) NSArray activeExperiments;
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
- (BOOL)hasSearchSessionId;
- (void)deleteSearchSessionId;
- (void)clearActiveExperiments;
- (void)deleteActiveExperiments;
- (void)addActiveExperiments:;
- (unsigned long long)activeExperimentsCount;
- (id)activeExperimentsAtIndex:;
- (id)searchSessionId;
- (void)setSearchSessionId:;
- (id)activeExperiments;
- (void)setActiveExperiments:;
- (void)setHasSearchSessionId:;
@end
