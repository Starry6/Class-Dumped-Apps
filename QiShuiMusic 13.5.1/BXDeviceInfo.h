@interface BXDeviceInfo : NSObject
+ (long long)getAvailableMem;
+ (double)getBatteryLevel;
+ (long long)getCpuFrequency;
+ (unsigned long long)apple_jetsam_memory_limite:;
+ (unsigned long long)current_jetsam_memory_limite;
+ (double)getBatteryTemp;
+ (double)getCPUUsage;
+ (int)getCpuCores;
+ (id)getGpuInfo;
+ (double)getMemUsage;
+ (long long)getMemorySize;
+ (long long)getProcessVirtualMemorySize;
+ (id)getScreenInfo;
+ (long long)getStorageSize;
+ (id)getSystemVersion;
+ (float)gpuUsage;
+ (BOOL)isLowPowerModeEnable;
+ (unsigned long long)total_memory;
+ (id)getDeviceModel;
@end
