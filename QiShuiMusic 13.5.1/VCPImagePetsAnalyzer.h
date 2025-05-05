@interface VCPImagePetsAnalyzer : VCPImageAnalyzer
- (void).cxx_destruct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (id)initWithMaxNumRegions:;
- (int)convertResultsToDict:results:;
@end
