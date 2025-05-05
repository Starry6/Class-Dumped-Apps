@interface VCPVideoSceneClassifier : VCPVideoAnalyzer
@property (nonatomic) NSDictionary frameScenes;
@property (nonatomic) NSArray sceneResults;
- (id)init;
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (BOOL)compareObjectsOfInterest:withScenes:;
- (void)addResult:start:duration:keyIsName:;
- (void)addAggregatedScenes:timerange:;
- (id)frameScenes;
- (id)sceneResults;
- (void)setSceneResults:;
@end
