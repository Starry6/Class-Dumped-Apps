@interface ADStereoExecutorParameters : ADExecutorParameters
@property (nonatomic) ADStereoPipelineParameters pipelineParameters;
- (id)init;
- (void).cxx_destruct;
- (id)pipelineParameters;
- (id)initForPipeline:;
@end
