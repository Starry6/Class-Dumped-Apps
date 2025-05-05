@interface SUTSchemaTestOutcomeRecorded : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger testOutcome;
@property (nonatomic) BOOL hasTestOutcome;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setTestOutcome:;
- (BOOL)hasTestOutcome;
- (void)setHasTestOutcome:;
- (void)deleteTestOutcome;
- (int)testOutcome;
@end
