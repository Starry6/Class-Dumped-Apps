@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated : SISchemaInstrumentationMessage
@property (nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals independentSignal;
@property (nonatomic) BOOL hasIndependentSignal;
@property (nonatomic) NSArray dependentSignals;
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
- (BOOL)hasIndependentSignal;
- (void)deleteIndependentSignal;
- (void)clearDependentSignals;
- (void)deleteDependentSignals;
- (void)addDependentSignals:;
- (unsigned long long)dependentSignalsCount;
- (id)dependentSignalsAtIndex:;
- (id)independentSignal;
- (void)setIndependentSignal:;
- (id)dependentSignals;
- (void)setDependentSignals:;
- (void)setHasIndependentSignal:;
@end
