@interface CUTPowerMonitor : NSObject
@property (nonatomic) BOOL isExternalPowerConnected;
@property (nonatomic) double batteryPercentRemaining;
- (void)addDelegate:;
- (void)dealloc;
- (void)removeDelegate:;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:;
- (BOOL)isExternalPowerConnected;
- (void)_handlePowerChangedNotificationWithMessageType:notificationID:;
- (double)batteryPercentRemaining;
- (BOOL)_initIOService;
- (void).cxx_destruct;
- (id)_init;
- (void)updateBatteryConnectedStateWithBatteryEntry:;
- (void)updateBatteryLevelWithBatteryEntry:;
+ (id)sharedInstance;
@end
