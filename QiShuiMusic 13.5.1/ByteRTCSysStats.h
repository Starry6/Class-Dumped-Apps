@interface ByteRTCSysStats : NSObject
@property (nonatomic) I cpuCores;
@property (nonatomic) double cpuAppUsage;
@property (nonatomic) double cpuTotalUsage;
@property (nonatomic) double memoryUsage;
@property (nonatomic) Q fullMemory;
@property (nonatomic) Q totalMemoryUsage;
@property (nonatomic) Q freeMemory;
@property (nonatomic) double memoryRatio;
@property (nonatomic) double totalMemoryRatio;
- (unsigned long long)freeMemory;
- (void)setFreeMemory:;
- (unsigned int)cpuCores;
- (void)setCpuCores:;
- (double)cpuAppUsage;
- (void)setCpuAppUsage:;
- (double)cpuTotalUsage;
- (void)setCpuTotalUsage:;
- (unsigned long long)fullMemory;
- (void)setFullMemory:;
- (unsigned long long)totalMemoryUsage;
- (void)setTotalMemoryUsage:;
- (double)memoryRatio;
- (void)setMemoryRatio:;
- (double)totalMemoryRatio;
- (void)setTotalMemoryRatio:;
- (void)setMemoryUsage:;
- (double)memoryUsage;
@end
