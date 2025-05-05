@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID dodMlId;
@property (nonatomic) BOOL hasDodMlId;
@property (nonatomic) NSString experimentName;
@property (nonatomic) BOOL hasExperimentName;
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
- (BOOL)hasExperimentName;
- (id)experimentName;
- (void)setExperimentName:;
- (BOOL)hasDodMlId;
- (void)deleteDodMlId;
- (void)deleteExperimentName;
- (id)dodMlId;
- (void)setDodMlId:;
- (void)setHasDodMlId:;
- (void)setHasExperimentName:;
@end
