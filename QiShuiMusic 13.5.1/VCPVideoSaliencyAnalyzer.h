@interface VCPVideoSaliencyAnalyzer : VCPVideoAnalyzer
- (id)results;
- (void).cxx_destruct;
- (id)initWithTransform:;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (float)updateConfidence:prevBound:newBound:width:height:;
- (BOOL)isOutOfBoundary:;
- (id)pruneRegions:withOverlapRatio:;
- (float)boundDistance:relativeTo:landscape:;
@end
