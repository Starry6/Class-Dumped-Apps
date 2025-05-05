@interface VCPImageHandsAnalyzer : VCPImageAnalyzer
- (id)init;
- (void).cxx_destruct;
- (int)configForAspectRatio:;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (id)initWithKeypointsOption:forceCPU:sharedModel:aspectRatio:modelName:revision:;
- (long long)getClosestAspectRatio:;
- (int)updateModelForAspectRatio:;
- (int)convertSingleResultToDict:keypointConfidence:box:results:;
- (int)preferredInputFormat:height:format:;
@end
