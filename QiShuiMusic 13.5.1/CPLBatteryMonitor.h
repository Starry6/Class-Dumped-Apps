@interface CPLBatteryMonitor : NSObject
+ (double)batteryLevel;
+ (void)_updateBatteryWithBatteryEntry:;
+ (id)powerStatusPlist;
+ (void)startMonitoringPowerEvents;
+ (void)setDelegate:;
+ (id)powerStatus;
+ (id)delegate;
@end
