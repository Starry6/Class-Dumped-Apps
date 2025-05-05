@interface VCPVideoPetsAnalyzer : VCPVideoAnalyzer
- (id)results;
- (void).cxx_destruct;
- (id)initWithTransform:;
- (id)parseResults:toDetections:atTime:fromTime:addActiveRegions:;
- (int)analyzeFrame:withTimestamp:andDuration:flags:frameStats:;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (void)addDetectionToDict:withActiveRegions:forPetsDetections:fromTime:;
- (int)finishAnalysisPass:;
@end
