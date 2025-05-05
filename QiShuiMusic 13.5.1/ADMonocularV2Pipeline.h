@interface ADMonocularV2Pipeline : NSObject
@property (nonatomic) ADMonocularV2PipelineParameters pipelineParameters;
- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:andParameters:;
- (id)pipelineParameters;
- (id)initWithInputPrioritization:;
- (void)setPipelineParameters:;
- (long long)adjustForEngine:;
- (long long)postProcessDisparity:output:;
@end
