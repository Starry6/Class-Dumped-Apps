@interface VCPMotionFlowSubtleMotionAnalyzer : VCPVideoAnalyzer
@property (nonatomic) float subtleMotionScore;
- (id)init;
- (void)dealloc;
- (int)createPixelBufferWithWidth:height:pixelFormat:pixelBuffer:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)convertPixelBuffer:toPixelBuffer:withPixelFormat:;
- (int)prepareAnalyzerWithCVPixelBuffer:cancel:;
- (int)convertFlow:;
- (int)preProcessing:;
- (int)generateMotionFlow;
- (int)generateSubleMotionScore:;
- (int)analyzePixelBuffer:withFrame:withTimestamp:andDuration:hasSubtleScene:cancel:;
- (float)subtleMotionScore;
+ (BOOL)enableR2D2;
@end
