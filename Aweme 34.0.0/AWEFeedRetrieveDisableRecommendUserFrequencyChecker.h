@interface AWEFeedRetrieveDisableRecommendUserFrequencyChecker : NSObject
@property (nonatomic) q hourLimit;
@property (nonatomic) q exitTimesLimit;
@property (nonatomic) q exitDayDuration;
@property (nonatomic) NSMutableArray showBottomBarDateRecord;
- (void)restoreRecord;
- (BOOL)checkFrequencyValid;
- (BOOL)checkExitPeriodValid;
- (long long)exitDayDuration;
- (long long)exitTimesLimit;
- (BOOL)isDate:withinStartDate:andEndDate:;
- (BOOL)checkShowPrerequisitesMatched;
- (void)setExitTimesLimit:;
- (void)setExitDayDuration:;
- (id)showBottomBarDateRecord;
- (long long)hourLimit;
- (id)initWithHourLimit:exitTimesLimit:exitDayDuration:;
- (void)recordShowBottomBar;
- (void)recordClickBottomBar;
- (void)setHourLimit:;
- (void)setShowBottomBarDateRecord:;
- (void).cxx_destruct;
@end
