@interface VCPVideoGyroStabilizer : VCPVideoStabilizer
- (void).cxx_destruct;
- (int)convertAnalysisResult;
- (id)initWithMetadata:sourceSize:cropRect:;
- (void)storeAnalytics:isLivePhoto:;
@end
