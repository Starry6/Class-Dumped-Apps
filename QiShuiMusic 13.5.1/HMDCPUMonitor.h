@interface HMDCPUMonitor : HMDMonitor
- (id)appCpuInfoWithTheadInfo:threadRecord:;
- (id)cpuUsageInfoWithoutAPPUsage;
- (void)enterCustomSceneWithUniq:;
- (void)leaveCustomSceneWithUniq:;
- (unsigned long long)reporterPriority;
- (void)updateConfig:;
- (id)refresh;
- (void)start;
- (void)stop;
- (Class)storeClass;
+ (id)cpuUsageInfo;
+ (id)cpuUsageInfoWithCustomScene:;
+ (id)sharedMonitor;
@end
