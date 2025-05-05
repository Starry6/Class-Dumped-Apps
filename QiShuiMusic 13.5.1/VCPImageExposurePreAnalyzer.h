@interface VCPImageExposurePreAnalyzer : VCPImageAnalyzer
@property (nonatomic) float exposureScore;
- (float)exposureScore;
- (float)computeRegionNoise:blockTextureness:average:width:height:stride:;
- (float)computeNoiseLevel:width:height:stride:textureness:;
- (int)analyzePixelBuffer:flags:results:cancel:;
@end
