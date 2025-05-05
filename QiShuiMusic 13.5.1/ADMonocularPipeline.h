@interface ADMonocularPipeline : NSObject
@property (nonatomic) ADMonocularPipelineParameters pipelineParameters;
- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:andParameters:;
- (id)pipelineParameters;
- (id)initWithInputPrioritization:;
- (void)setPipelineParameters:;
- (id)processedDepthOutputDescriptor;
- (long long)postProcessWithDepth:depthOutput:;
@end
