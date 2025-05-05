@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage
@property (nonatomic) NSString datapackVersion;
@property (nonatomic) BOOL hasDatapackVersion;
@property (nonatomic) NSArray confusionPairs;
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
- (BOOL)hasDatapackVersion;
- (void)deleteDatapackVersion;
- (id)datapackVersion;
- (void)setDatapackVersion:;
- (void)setHasDatapackVersion:;
- (void)clearConfusionPairs;
- (void)deleteConfusionPairs;
- (void)addConfusionPairs:;
- (unsigned long long)confusionPairsCount;
- (id)confusionPairsAtIndex:;
- (id)confusionPairs;
- (void)setConfusionPairs:;
@end
