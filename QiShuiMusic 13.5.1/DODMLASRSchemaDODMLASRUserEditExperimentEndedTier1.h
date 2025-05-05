@interface DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (id)linkId;
- (void)setLinkId:;
- (void)setHasLinkId:;
- (BOOL)hasLinkId;
- (void)deleteLinkId;
- (void)clearConfusionPairs;
- (void)deleteConfusionPairs;
- (void)addConfusionPairs:;
- (unsigned long long)confusionPairsCount;
- (id)confusionPairsAtIndex:;
- (id)confusionPairs;
- (void)setConfusionPairs:;
@end
