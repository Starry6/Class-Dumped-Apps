@interface VCPMoFlowSingleEspresso : VCPImageMotionFlowAnalyzer
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)configForAspectRatio:;
- (int)copyImage:toData:withChannels:;
- (int)createInput:withBuffer:cnnInputHeight:cnnInputWidth:;
- (int)prepareWithLightweightOption:aspectRatio:forceCPU:sharedModel:flushModel:;
- (int)prepareModel;
- (int)reInitModel;
- (int)analyzeImages:secondImage:cancel:;
- (id)getFlowWithHeight:andWidth:;
- (int)getFlowToBuffer:;
- (int)flowScalingTo:scalerX:scalerY:;
- (int)flowScalingTo:flowBufferY:scalerX:scalerY:;
- (int)updateModelForAspectRatio:computationAccuracy:;
+ (id)sharedModel:inputNames:;
@end
