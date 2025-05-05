@interface VCPVideoCNNAnalyzer : VCPVideoAnalyzer
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (id)initWithTimeOfInteret:frameRate:isLivePhoto:phFaces:timeRange:requestedAnalyses:;
- (int)configForAspectRatio:;
- (int)copyImage:withChannels:;
- (int)loadAnalysisResultsFrom:actionAnalyzer:atTime:;
- (int)loadAnalysisResults:audioResults:;
- (id)isAnalysisResultNeeded:;
- (int)runTasks:duration:persons:regionCrop:;
- (id)privateResults;
+ (BOOL)forcePersonDetection;
+ (BOOL)isMLHighlightEnabled;
@end
