@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer
@property (nonatomic) float actionScore;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)actionScore;
- (int)setPixelBuffer:;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)calculateFrameDifference:;
- (int)computeRegionsofInterest;
- (id)regionsOfInterest;
@end
