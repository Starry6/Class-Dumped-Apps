@interface AWEMVChannelRealTimeBannerRecordModel : MTLModel
@property (nonatomic) NSString bannerID;
@property (nonatomic) Q showStrategy;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) Q todayShowTimes;
@property (nonatomic) NSDate lastShownDate;
@property (nonatomic) BOOL hasClosed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBannerID:;
- (unsigned long long)showStrategy;
- (void)setShowStrategy:;
- (id)lastShownDate;
- (void)setLastShownDate:;
- (unsigned long long)todayShowTimes;
- (void)setTodayShowTimes:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (double)startTime;
- (BOOL)hasClosed;
- (void)setHasClosed:;
- (id)bannerID;
@end
