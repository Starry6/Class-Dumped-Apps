@interface CPMSClientDescription : NSObject
@property (nonatomic) q clientId;
@property (nonatomic) NSDictionary powerLevels;
@property (nonatomic) BOOL isContinuous;
@property (nonatomic) @? notificationCallback;
@property (nonatomic) @? getCurrentPower;
@property (nonatomic) I powerBudgetUpdateMinimumPeriod;
- (long long)clientId;
- (BOOL)isContinuous;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setClientId:;
- (id)powerLevels;
- (void)setPowerLevels:;
- (void)setNotificationCallback:;
- (void)setIsContinuous:;
- (void)setGetCurrentPower:;
- (void)setPowerBudgetUpdateMinimumPeriod:;
- (id)notificationCallback;
- (id)getCurrentPower;
- (unsigned int)powerBudgetUpdateMinimumPeriod;
@end
