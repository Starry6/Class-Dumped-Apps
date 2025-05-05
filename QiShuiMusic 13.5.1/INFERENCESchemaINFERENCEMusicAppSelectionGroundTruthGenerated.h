@interface INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage
@property (nonatomic) INFERENCESchemaINFERENCEMusicTrainingIndependentSignals inferenceMusicTrainingIndependentSignals;
@property (nonatomic) BOOL hasInferenceMusicTrainingIndependentSignals;
@property (nonatomic) NSArray inferenceMusicTrainingDependentSignals;
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
- (BOOL)hasInferenceMusicTrainingIndependentSignals;
- (void)deleteInferenceMusicTrainingIndependentSignals;
- (void)clearInferenceMusicTrainingDependentSignals;
- (void)deleteInferenceMusicTrainingDependentSignals;
- (void)addInferenceMusicTrainingDependentSignals:;
- (unsigned long long)inferenceMusicTrainingDependentSignalsCount;
- (id)inferenceMusicTrainingDependentSignalsAtIndex:;
- (id)inferenceMusicTrainingIndependentSignals;
- (void)setInferenceMusicTrainingIndependentSignals:;
- (id)inferenceMusicTrainingDependentSignals;
- (void)setInferenceMusicTrainingDependentSignals:;
- (void)setHasInferenceMusicTrainingIndependentSignals:;
@end
