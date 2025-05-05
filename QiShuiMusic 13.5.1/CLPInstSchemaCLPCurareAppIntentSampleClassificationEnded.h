@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded : SISchemaInstrumentationMessage
@property (nonatomic) float probability;
@property (nonatomic) BOOL hasProbability;
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
- (float)probability;
- (void)setProbability:;
- (void)setHasProbability:;
- (BOOL)hasProbability;
- (void)deleteProbability;
@end
