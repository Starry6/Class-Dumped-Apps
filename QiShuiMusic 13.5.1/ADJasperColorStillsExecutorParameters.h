@interface ADJasperColorStillsExecutorParameters : ADExecutorParameters
@property (nonatomic) ADJasperColorStillsPipelineParameters pipelineParameters;
@property (nonatomic) BOOL performJasperToColorTransformCorrection;
- (void).cxx_destruct;
- (id)pipelineParameters;
- (id)initForPipeline:;
- (BOOL)performJasperToColorTransformCorrection;
- (void)setPerformJasperToColorTransformCorrection:;
@end
