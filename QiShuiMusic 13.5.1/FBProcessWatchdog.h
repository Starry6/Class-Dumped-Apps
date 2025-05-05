@interface FBProcessWatchdog : FBSProcessWatchdog
@property (nonatomic) q event;
@property (nonatomic) FBProcessWatchdogEventContext eventContext;
@property (nonatomic) FBProcessCPUStatistics cpuStatistics;
- (long long)event;
- (id)_policyDesc;
- (id)initWithProcess:context:policy:;
- (void).cxx_destruct;
- (id)cpuStatistics;
- (id)eventContext;
- (void)activate;
@end
