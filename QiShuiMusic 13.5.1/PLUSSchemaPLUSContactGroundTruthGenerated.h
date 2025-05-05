@interface PLUSSchemaPLUSContactGroundTruthGenerated : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (nonatomic) PLUSSchemaPLUSContactGroundTruth groundTruth;
@property (nonatomic) BOOL hasGroundTruth;
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
- (BOOL)hasOriginalPlusId;
- (void)deleteOriginalPlusId;
- (BOOL)hasGroundTruth;
- (void)deleteGroundTruth;
- (id)originalPlusId;
- (void)setOriginalPlusId:;
- (id)groundTruth;
- (void)setGroundTruth:;
- (void)setHasOriginalPlusId:;
- (void)setHasGroundTruth:;
@end
