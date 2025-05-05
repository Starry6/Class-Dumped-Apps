@interface MSBatteryPowerMonitor : NSObject
@property (nonatomic) double currentLevel;
@property (nonatomic) BOOL isExternalPowerConnected;
- (id)init;
- (void)dealloc;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:;
- (BOOL)isExternalPowerConnected;
- (double)batteryPercentRemaining;
- (double)currentLevel;
- (void)setExternalPowerConnected:;
- (void)updateBatteryConnectedStateWithBatteryEntry:;
- (void)setCurrentLevel:;
- (void)updateBatteryLevelWithBatteryEntry:;
+ (id)defaultMonitor;
@end
