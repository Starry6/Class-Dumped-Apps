@interface ADJasperColorExecutorParameters : ADExecutorParameters
@property (nonatomic) ADJasperColorPipelineParameters pipelineParameters;
@property (nonatomic) BOOL doTemporalConsistency;
@property (nonatomic) BOOL useAlphaMapForTemporalConsistency;
@property (nonatomic) BOOL doComputeNormals;
@property (nonatomic) Q temporalConsistencyMethod;
- (void).cxx_destruct;
- (id)pipelineParameters;
- (id)initForPipeline:;
- (void)setDoTemporalConsistency:;
- (BOOL)doTemporalConsistency;
- (BOOL)useAlphaMapForTemporalConsistency;
- (void)setUseAlphaMapForTemporalConsistency:;
- (BOOL)doComputeNormals;
- (void)setDoComputeNormals:;
- (unsigned long long)temporalConsistencyMethod;
- (void)setTemporalConsistencyMethod:;
@end
