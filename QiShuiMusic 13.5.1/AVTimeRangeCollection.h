@interface AVTimeRangeCollection : NSObject
@property (nonatomic) NSArray timeRanges;
@property (nonatomic) double combinedDuration;
- (id)init;
- (void).cxx_destruct;
- (double)timeFromDisplayTime:;
- (id)initWithTimeRanges:;
- (unsigned long long)count;
- (double)displayTimeFromTime:;
- (id)timeRanges;
- (id)initWithInterstitialTimeRanges:;
- (void)setMapDate:toTime:;
- (id)initWithTimedMetadataGroups:;
- (id)timeRangeContainingTime:;
- (id)timeRangeClosestToTime:;
- (id)timeRangeBeforeTime:;
- (id)timeRangeAfterTime:;
- (id)arrayOfBoundaryTimes;
- (id)arrayOfDisplayTimesMatching:;
- (id)arrayOfDisplayTimes;
- (id)timeRangesBetweenDisplayTime:and:;
- (id)displayTimeRangeTrimmedToTimeRange:;
- (double)combinedDuration;
@end
