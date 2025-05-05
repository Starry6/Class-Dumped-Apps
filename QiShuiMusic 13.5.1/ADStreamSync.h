@interface ADStreamSync : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (long long)reset;
- (id)initWithStreamCount:allowedMatchTimeInterval:;
- (long long)setStream:queueSize:;
- (long long)setStream:queueSize:aggregationCount:allowedAggregationInterval:;
- (id)pushData:streamIndex:timestamp:pose:;
- (id)pushData:streamIndex:timestamp:pose:meta:;
- (double)oldestAverageTimestampForStream:;
- (BOOL)areOldestMatchingObjectsInAllowedInterval:;
- (BOOL)streamContainsMinimalFrameCount:;
- (void)dropOldFramesFromStream:belowTimestampThreshold:;
- (id)createAndPopulateMatch;
- (id)checkForMatch;
- (BOOL)checkOnceForMatch:;
@end
