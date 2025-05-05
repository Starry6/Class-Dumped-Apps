@interface VCPImageFaceExpressionAnalyzer : VCPImageAnalyzer
- (void).cxx_destruct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (id)initWithFaceResults:;
@end
