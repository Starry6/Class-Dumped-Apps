@interface AVInterstitialDateRange : AVInterstitialTimeRange
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)timeRange;
- (id)startDate;
- (id)initWithStart:end:;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTimeRange:;
- (id)_initWithTimeRange:;
- (BOOL)isEqualToInterstitialTimeRange:;
- (void)_setPlayerInterstitialEvent:;
- (void)_updateMappedStartTime;
@end
