@interface VCPContentAnalysis : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)copyBlock:withStride:toBlock:;
- (int)blockContentDetection:;
- (int)detectPixelBuffer:contentType:;
+ (id)contentAnalysis;
@end
