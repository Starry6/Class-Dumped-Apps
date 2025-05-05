@interface VCPVideoCaptionAnalyzer : VCPVideoAnalyzer
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (int)copyImage:withChannels:;
- (id)initWithFrameRate:timeRange:;
- (int)downloadVideoCaptionEncoderIfNeeded;
- (int)configInputBasedOnDevice;
- (int)inference:duration:;
+ (long long)mode;
+ (id)videoCaptionEncoderTestURL;
+ (id)videoCaptionDecoderTestURL;
+ (id)imageCaptionModelTestURL;
+ (id)cloneCaptionModel:to:;
@end
