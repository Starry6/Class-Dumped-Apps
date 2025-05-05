@interface ADStereoPipeline : NSObject
@property (nonatomic) ADStereoPipelineParameters pipelineParameters;
@property (nonatomic) Q stereoImagesAlignment;
@property (nonatomic) BOOL shouldPreProcessColorInputs;
- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputAlignment:andPrioritization:;
- (id)pipelineParameters;
- (void)setPipelineParameters:;
- (long long)adjustForEngine:;
- (id)initWithInputAlignment:prioritization:andParameters:;
- (long long)preProcessColorInput:toBuffer:;
- (unsigned long long)stereoImagesAlignment;
- (BOOL)shouldPreProcessColorInputs;
@end
