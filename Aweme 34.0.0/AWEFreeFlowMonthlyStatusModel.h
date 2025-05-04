@interface AWEFreeFlowMonthlyStatusModel : AWEBaseApiModel
@property (nonatomic) NSArray dailyStatusModelArray;
@property (nonatomic) NSNumber recordMonthlyStartTimestamp;
@property (nonatomic) BOOL showAlertBefore7;
@property (nonatomic) BOOL showAlertAfter25;
@property (nonatomic) BOOL setByUser;
@property (nonatomic) BOOL shouldPlay;
- (BOOL)shouldPlay;
- (void)chooseOption:;
- (id)recordMonthlyStartTimestamp;
- (void)setSetByUser:;
- (void)setShouldPlay:;
- (void)launchAppWithWifi:;
- (void)setShowAlertBefore7:;
- (void)setShowAlertAfter25:;
- (id)dailyStatusModelArray;
- (BOOL)showAlertAfter25;
- (BOOL)showAlertBefore7;
- (BOOL)setByUser;
- (BOOL)hasReachNoAlertStatusAfter25;
- (void)addPauseOptionWithArray:withOption:;
- (void)addLaunchAppWithArray:withWifi:;
- (void)setDailyStatusModelArray:;
- (void)setRecordMonthlyStartTimestamp:;
- (id)init;
- (void).cxx_destruct;
@end
