@interface VCPImagePetsKeypointsAnalyzer : VCPImageAnalyzer
- (void).cxx_destruct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (id)initWithMaxNumRegions:forceCPU:sharedModel:;
- (int)analyzePixelBuffer:flags:petsDetections:results:cancel:;
@end
