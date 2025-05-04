@interface AWEFreeFlowStatusModel : AWEBaseApiModel
@property (nonatomic) NSArray totalFlowStatusModelArray;
@property (nonatomic) BOOL isFreeFlowUserCloseSwitchManually;
- (void)chooseOption:;
- (id)totalFlowStatusModelArray;
- (void)deleteExpiredModel;
- (void)setTotalFlowStatusModelArray:;
- (void)setIsFreeFlowUserCloseSwitchManually:;
- (void)launchAppWithWifi:;
- (BOOL)isFreeFlowUserCloseSwitchManually;
- (id)findCurrentMonthModel;
- (id)init;
- (void).cxx_destruct;
@end
