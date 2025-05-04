@interface AWEStudioPerformanceUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (double)timeIntervalForKey:;
+ (void)startTraceTimeForKey:;
+ (id)getMemoryUsageInfo;
+ (void)cancelTraceTimeForKey:;
+ (double)acc_applicationCPUUsage;
+ (double)acc_systemCPUUsage;
+ (unsigned long long)acc_totalPhysicalMemory;
+ (unsigned long long)acc_usedMemory;
+ (unsigned long long)acc_applicationUsedMemory;
+ (unsigned long long)acc_availabeMemory;
+ (unsigned long long)acc_totalDiskSpace;
+ (unsigned long long)acc_usedDiskSpace;
+ (unsigned long long)acc_availabelDiskSpace;
+ (long long)acc_screenBrightness;
@end
