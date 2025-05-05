@interface IESECMemoryBalanceMemoryUsage : NSObject
+ (BOOL)enableMemoryMonitor;
+ (double)fetchCurrentMemoryUsageForByte;
+ (double)fetchCurrentMemoryUsageForMB;
@end
