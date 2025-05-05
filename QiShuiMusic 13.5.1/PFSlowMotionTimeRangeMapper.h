@interface PFSlowMotionTimeRangeMapper : NSObject
- (id)init;
- (void).cxx_destruct;
- (float)scaledTimeForOriginalTime:;
- (void)addNextRange:scaledLength:;
- (float)originalTimeForScaledTime:;
- (float)_mapTime:fromLengths:toLengths:;
- (void)markScaledRegionWithRate:rampInStartTime:rampInEndTime:rampOutStartTime:rampOutEndTime:;
- (void)enumerateScaledRegionsUsingBlock:;
@end
