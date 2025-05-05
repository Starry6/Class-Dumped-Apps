@interface VCPMovieCurationAnalyzer : NSObject
- (id)results;
- (void).cxx_destruct;
- (void)setMaxHighlightDuration:;
- (id)initWithAnalysisTypes:transform:timeRange:isLivePhoto:photoOffset:frameStats:hadFlash:hadZoom:keyFrameResults:isTimelapse:preferredTimeRange:asset:;
- (int)analyzeKeyFrame:withTimestamp:andDuration:flags:;
- (void)loadVideoAnalysisResults:audioAnalysisResults:videoCNNResults:andFaceRanges:frameSize:;
- (int)postProcessKeyFrames;
- (int)generateMovieCurations;
- (id)audioQualityScore:;
- (void)addHighlight:to:;
- (void)addSummary:to:;
- (void)addSettling:to:;
- (void)reportMovieCurationAnalysisResults:withSummaryAnalytics:;
+ (BOOL)isSettlingEffectPregatingEnabled;
@end
