@interface HTSNHPerformanceInfo : NSObject
+ (unsigned long long)availableMemory;
+ (double)calculateMean:;
+ (double)coefficientVariation:;
+ (unsigned long long)memoryLimitMBForDevice;
+ (unsigned long long)newUsedMemory;
+ (double)percentOfUsedMemory;
+ (double)totalMemory;
+ (id)usedMemory;
+ (unsigned long long)usedMemoryAfterIOS9;
+ (id)cpuUsage;
@end
