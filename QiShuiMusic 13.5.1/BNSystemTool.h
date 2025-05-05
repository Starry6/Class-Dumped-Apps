@interface BNSystemTool : NSObject
+ (long long)getAppMemoryBytes;
+ (long long)getAppMemoryBytesAfterIOS9;
+ (long long)getAppMemoryBytesBeforeIOS9;
+ (BOOL)greaterThanOrEqualToXcode11;
+ (long long)memoryActive;
+ (long long)memoryFree;
+ (long long)memoryInactive;
+ (long long)memoryPurgable;
+ (long long)memoryTotal;
+ (unsigned long long)networkBytes;
+ (long long)memoryUsed;
+ (float)cpuUsage;
+ (long long)memoryWired;
@end
