@interface OPTINSchemaOPTINInconsistentStateDetected : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger inconsistencyCondition;
@property (nonatomic) BOOL hasInconsistencyCondition;
@property (nonatomic) NSInteger inconsistencyTrigger;
@property (nonatomic) BOOL hasInconsistencyTrigger;
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
- (void)setInconsistencyCondition:;
- (BOOL)hasInconsistencyCondition;
- (void)setHasInconsistencyCondition:;
- (void)deleteInconsistencyCondition;
- (void)setInconsistencyTrigger:;
- (BOOL)hasInconsistencyTrigger;
- (void)setHasInconsistencyTrigger:;
- (void)deleteInconsistencyTrigger;
- (int)inconsistencyCondition;
- (int)inconsistencyTrigger;
@end
