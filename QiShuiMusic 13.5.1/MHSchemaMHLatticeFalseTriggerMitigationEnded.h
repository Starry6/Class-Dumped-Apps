@interface MHSchemaMHLatticeFalseTriggerMitigationEnded : SISchemaInstrumentationMessage
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasThreshold;
@property (nonatomic) NSData jsonData;
- (float)threshold;
- (id)initWithJSON:;
- (float)score;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setScore:;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (void)setThreshold:;
- (void)deleteScore;
- (BOOL)hasThreshold;
- (void)setHasThreshold:;
- (void)deleteThreshold;
@end
