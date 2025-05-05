@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer
- (id)init;
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (void)ComputeSceneDelta:;
- (void)PrintSegments;
- (BOOL)decideLensSwitchPoint:;
- (int)finalizeAnalysisPass:;
- (BOOL)isSegmentPoint;
@end
