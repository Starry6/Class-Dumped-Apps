@interface BDUGLocationInternalConfig : NSObject
+ (long long)bluetoothDuration;
+ (BOOL)isEnableHARCollect;
+ (BOOL)isEnableIntelligentDAQ;
+ (BOOL)isEnableReportLocationInfo;
+ (BOOL)isEnableScanBeacon;
+ (BOOL)isEnableThreadManagerOptimize;
+ (BOOL)isEnabledCollection;
+ (BOOL)isEnabledPoll;
+ (BOOL)isEnabledTraceroute;
+ (BOOL)lastLocationMonitorEnable;
+ (long long)reportHARRange;
+ (long long)reportedWiFiMaxCount;
+ (double)timeIntervalSettings;
+ (BOOL)useBPEAForcedCheck;
+ (id)settings;
@end
