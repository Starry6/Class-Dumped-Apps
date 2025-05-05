@interface MWTSchemaMWTCheckpointReported : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger stepType;
@property (nonatomic) BOOL hasStepType;
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
- (int)stepType;
- (void)setStepType:;
- (BOOL)hasStepType;
- (void)setHasStepType:;
- (void)deleteStepType;
@end
