@interface CNVSchemaCNVExecutionOverridesEvaluated : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger executionOverrideDecision;
@property (nonatomic) BOOL hasExecutionOverrideDecision;
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
- (void)setExecutionOverrideDecision:;
- (BOOL)hasExecutionOverrideDecision;
- (void)setHasExecutionOverrideDecision:;
- (void)deleteExecutionOverrideDecision;
- (int)executionOverrideDecision;
@end
