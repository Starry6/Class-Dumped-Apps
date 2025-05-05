@interface VCPVideoKeyFrameAnalyzer : NSObject
- (void).cxx_destruct;
- (id)initWithTransform:timeRange:isLivePhoto:frameStats:keyFrameResults:;
- (id)keyFrameScores;
- (int)analyzeFrame:withTimestamp:;
- (int)loadKeyFrameResults:;
- (void)preparePostProcessingStatsFromFaceRange:junkResults:;
- (int)postProcess;
- (id)keyFrames;
- (void)setBlurAnalyzerFaceResults:;
- (int)computeFaceQualityOfFrame:;
- (int)computeSharpnessOfFrame:;
- (int)finalizeKeyFrame;
- (void)adjustScoreByFace;
- (void)modulateByTimeRange;
- (void)modulateByExposure;
- (void)modulateByJunk;
- (void)setKeyFrameTime:isHeadingFrame:;
- (void)prepareFrameStats:;
- (float)computeMinDistanceBetween:withSet:;
+ (BOOL)isLivePhotoKeyFrameEnabled;
@end
