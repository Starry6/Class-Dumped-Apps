@interface IESLiveSaaSNHPerformanceInfo : NSObject
+ (unsigned long long)availableMemory;
+ (unsigned long long)newUsedMemory;
+ (double)percentOfUsedMemory;
+ (double)totalMemory;
+ (id)usedMemory;
+ (unsigned long long)usedMemoryAfterIOS9;
+ (id)cpuUsage;
@end
