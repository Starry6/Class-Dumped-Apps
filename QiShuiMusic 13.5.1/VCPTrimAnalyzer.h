@interface VCPTrimAnalyzer : NSObject
- (id)init;
- (BOOL)isReady;
- (void).cxx_destruct;
- (int)analyzeFrameWithTimeRange:analysisData:;
- (BOOL)shouldCutAt:stillPTS:withCut:;
- (void)printSegments:;
- (int)prepareTrimmingWithTrimStart:andTrimEnd:;
- (void)updateCurationThreshold;
- (BOOL)isCurated:;
- (int)finalizeWithDestructiveTrimStart:trimEnd:andCaptureTime:;
- (void)generateCurationSegment;
- (int)generateInterestingTrimBasedOnCaptureTime:;
- (float)calculateCandidateScoreWithRangeAdjust:endIdx:candidateTimeRange:captureTime:;
- (id)bestTrimTimeRange;
- (BOOL)isTimestampSkipable:;
- (BOOL)checkTrimAt:captureTime:;
@end
