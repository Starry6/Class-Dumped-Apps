@interface AWEFreeFlowDailyStatusModel : AWEBaseApiModel
@property (nonatomic) NSNumber recordTimeStampNumber;
@property (nonatomic) q pauseCount;
@property (nonatomic) q playCount;
@property (nonatomic) BOOL lastChoiceIsPlay;
@property (nonatomic) q noWifiLaunchCount;
@property (nonatomic) q WifiLaunchCount;
@property (nonatomic) BOOL hasContinuousPlayTwice;
- (long long)WifiLaunchCount;
- (long long)noWifiLaunchCount;
- (id)recordTimeStampNumber;
- (BOOL)hasContinuousPlayTwice;
- (void)choosePause;
- (void)choosePlay;
- (void)launchAppInWifiCondition:;
- (void)setHasContinuousPlayTwice:;
- (void)setLastChoiceIsPlay:;
- (BOOL)lastChoiceIsPlay;
- (void)setWifiLaunchCount:;
- (void)setNoWifiLaunchCount:;
- (void)setRecordTimeStampNumber:;
- (id)init;
- (long long)playCount;
- (void).cxx_destruct;
- (void)setPlayCount:;
- (long long)pauseCount;
- (void)setPauseCount:;
@end
