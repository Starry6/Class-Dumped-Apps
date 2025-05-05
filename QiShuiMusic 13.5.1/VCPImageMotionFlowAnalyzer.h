@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer
@property (nonatomic) NSInteger cnnOutputHeight;
@property (nonatomic) NSInteger cnnOutputWidth;
- (id)init;
- (void).cxx_destruct;
- (int)configForAspectRatio:;
- (int)prepareWithLightweightOption:aspectRatio:forceCPU:sharedModel:flushModel:;
- (int)reInitModel;
- (int)analyzeImages:secondImage:cancel:;
- (id)getFlowWithHeight:andWidth:;
- (int)getFlowToBuffer:;
- (int)flowScalingTo:scalerX:scalerY:;
- (int)flowScalingTo:flowBufferY:scalerX:scalerY:;
- (int)updateModelForAspectRatio:computationAccuracy:;
- (int)prepareWithLightweightOption:aspectRatio:numLevels:startLevel:cancel:;
- (int)preferredInputFormat:height:format:;
- (id)initWithLightweightOption:aspectRatio:computationAccuracy:forceCPU:sharedModel:flushModel:cancel:;
- (int)scaleFlowTo:;
- (int)combineBufferTo:flowX:flowY:;
- (int)guidedUpsampling:inBGRA:;
- (int)cnnOutputHeight;
- (int)cnnOutputWidth;
+ (id)analyzeWithLightweightOption:aspectRatio:computationAccuracy:forceCPU:sharedModel:flushModel:cancel:;
@end
