@interface VCPActionAnalyzer : NSObject
- (id)segments;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)analyzeFrameWithTimeRange:andActionScore:;
- (void)updateActiveThreshold;
- (BOOL)isActive:;
- (BOOL)isScoreValid:;
- (BOOL)decideSegmentPointBasedOnActionScore:;
- (BOOL)decideSegmentPointUsingHinkleyDetector:;
- (int)mergeConsecutiveShortSegments;
- (int)mergeSameTypeSegments;
- (int)mergeSparseShortSegments;
- (int)finalizeWithDestructiveTrimStart:trimEnd:;
- (int)postProcessSegmentsWithCaptureTime:trimStart:;
- (id)activeSegment;
- (void)printSegments:;
- (int)prepareTrimmingWithTrimStart:andTrimEnd:;
@end
