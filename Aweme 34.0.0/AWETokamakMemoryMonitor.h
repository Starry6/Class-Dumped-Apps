@interface AWETokamakMemoryMonitor : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) AWETokamakMemoryMonitorConfig config;
- (id)getTempZipFileFromData:fileName:;
- (void)cleanStorage;
- (void)_prepareUniversalData;
- (void)uploadInternal;
- (void)_trackEvent:value:;
- (id)_aweme_ios_memory_monitor_config_v2;
- (BOOL)_reportLogByInHouseChannel:;
- (void)collectUniversalData:;
- (void)uploadWithRelaunchReason:;
- (void)_trackerWithType:value:;
- (void)trackLogNotFound:;
- (void)reportLog:launchTime:;
- (void)setConfig:;
- (void)setIsRunning:;
- (id)config;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isRunning;
- (id)_keys;
- (void)startInternal;
+ (id)shared;
@end
