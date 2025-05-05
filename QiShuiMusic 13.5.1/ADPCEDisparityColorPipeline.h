@interface ADPCEDisparityColorPipeline : NSObject
@property (nonatomic) ADPCEDisparityColorPipelineParameters pipelineParameters;
- (id)init;
- (id)initWithParameters:;
- (void).cxx_destruct;
- (id)initForInputSource:metalDevice:;
- (id)inferenceDescriptor;
- (long long)encodeDisparityPreprocessingToCommandBuffer:input:normalizationMultiplier:normalizationOffset:invalidValue:rotation:output:;
- (long long)encodeDisparityPostprocessingToCommandBuffer:input:output:;
- (id)pipelineParameters;
- (void)setPipelineParameters:;
- (id)initForInputSource:;
- (long long)rebuildMetalPreprocessingKernels;
- (long long)adjustForEngine:;
- (id)initWithParameters:inputSource:;
- (id)initWithParameters:inputSource:metalDevice:;
- (float)disparityScaleForLayout:;
@end
