@interface VCPVideoPixelStabilizer : VCPVideoStabilizer
- (id)init;
- (void)dealloc;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)convertAnalysisResult;
@end
