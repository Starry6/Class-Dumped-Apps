@interface IESLivePlayerPerfMonitor : NSObject
@property (nonatomic) NSNumber cpuUsage;
@property (nonatomic) NSNumber usedMemory;
@property (nonatomic) double lastMemoryUpdateTime;
@property (nonatomic) double lastCPUUpdateTime;
@property (nonatomic) double cacheTimeInterval;
@property (nonatomic) BOOL enableOptimize;
- (unsigned long long)fetchUsedMemory;
- (double)cacheTimeInterval;
- (BOOL)enableOptimize;
- (unsigned long long)fetchCpuUsage;
- (unsigned long long)fetchCpuUsage:;
- (unsigned long long)fetchUsedMemory:;
- (double)lastCPUUpdateTime;
- (double)lastMemoryUpdateTime;
- (void)setCacheTimeInterval:;
- (void)setEnableOptimize:;
- (void)setLastCPUUpdateTime:;
- (void)setLastMemoryUpdateTime:;
- (void)setUsedMemory:;
- (id)usedMemory;
- (id)init;
- (id)cpuUsage;
- (void).cxx_destruct;
- (void)setCpuUsage:;
+ (id)sharedInstance;
@end
