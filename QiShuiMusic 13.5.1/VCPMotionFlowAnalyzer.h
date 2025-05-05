@interface VCPMotionFlowAnalyzer : VCPVideoAnalyzer
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
- (int)analyzePixelBuffer:withFrame:withTimestamp:andDuration:cancel:;
@end
