@interface PuzzleDeviceStatsUtils : NSObject
+ (long long)_getTemperature;
+ (double)_getCPUUsage;
+ (double)_getMemoryRest;
+ (void)_getMemoryRestWithCallback:;
+ (BOOL)_isOverTime;
+ (void)_updateValueIfNeeded;
+ (id)deviceInfo;
@end
