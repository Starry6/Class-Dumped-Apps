@interface IHSchemaIHModelEvaluationStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSString modelId;
@property (nonatomic) BOOL hasModelId;
@property (nonatomic) NSData jsonData;
- (BOOL)hasModelId;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)modelId;
- (void)setModelId:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteModelId;
- (void)setHasModelId:;
@end
