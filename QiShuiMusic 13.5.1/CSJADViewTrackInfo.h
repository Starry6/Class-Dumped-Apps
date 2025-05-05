@interface CSJADViewTrackInfo : NSObject
@property (nonatomic) double viewDidAllVisibleTime;
@property (nonatomic) NSDate didEnterBackgroundDate;
@property (nonatomic) NSDate willEnterForegroundDate;
@property (nonatomic) double showStartTime;
@property (nonatomic) double showFirstQuartileTime;
@property (nonatomic) double showMidTime;
@property (nonatomic) double showThirdQuartileTime;
@property (nonatomic) double showFullTime;
- (void)setShowMidTime:;
- (id)didEnterBackgroundDate;
- (void)setDidEnterBackgroundDate:;
- (void)setShowFirstQuartileTime:;
- (void)setShowFullTime:;
- (void)setShowStartTime:;
- (void)setShowThirdQuartileTime:;
- (void)setViewDidAllVisibleTime:;
- (void)setWillEnterForegroundDate:;
- (double)showFirstQuartileTime;
- (double)showFullTime;
- (double)showMidTime;
- (double)showStartTime;
- (double)showThirdQuartileTime;
- (id)showTimeDict;
- (double)viewDidAllVisibleTime;
- (id)willEnterForegroundDate;
- (void).cxx_destruct;
- (long long)duration;
@end
