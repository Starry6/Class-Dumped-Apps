@interface VCPImageHumanPoseAnalyzerTopDown : VCPImageAnalyzer
- (void).cxx_destruct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (int)preferredInputFormat:height:format:;
- (id)initWithMaxNumRegions:forceCPU:sharedModel:inputConfig:;
@end
