@interface INFERENCESchemaINFERENCEPrivatizedHistoryStats : SISchemaInstrumentationMessage
@property (nonatomic) I recency;
@property (nonatomic) BOOL hasRecency;
@property (nonatomic) NSArray frequencies;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)frequencies;
- (void)setRecency:;
- (BOOL)hasRecency;
- (void)setHasRecency:;
- (void)deleteRecency;
- (void)clearFrequencies;
- (void)deleteFrequencies;
- (void)addFrequencies:;
- (unsigned long long)frequenciesCount;
- (unsigned int)frequenciesAtIndex:;
- (unsigned int)recency;
- (void)setFrequencies:;
@end
