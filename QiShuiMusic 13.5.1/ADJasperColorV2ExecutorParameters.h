@interface ADJasperColorV2ExecutorParameters : ADExecutorParameters
@property (nonatomic) ADJasperColorV2PipelineParameters pipelineParameters;
@property (nonatomic) BOOL outputHighConfidencePixelsOnly;
- (void).cxx_destruct;
- (void)setOutputHighConfidencePixelsOnly:;
- (id)pipelineParameters;
- (BOOL)outputHighConfidencePixelsOnly;
- (id)initForPipeline:;
@end
