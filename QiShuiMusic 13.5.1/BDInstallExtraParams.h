@interface BDInstallExtraParams : NSObject
+ (void)trackMbTimeDiff;
+ (unsigned int)countOfCores;
+ (id)ctuuid;
+ (id)deviceInitTime;
+ (id)deviceInitTimeFilePrefix;
+ (id)extraParams;
+ (id)getp6;
+ (id)mntId;
+ (char *)mntIdPrefix;
+ (id)new_getp6;
+ (long long)new_totalDiskSpace;
+ (id)old_getp6;
+ (long long)old_totalDiskSpace;
+ (id)static_ctuuid;
+ (long long)totalDiskAttrSpace:;
+ (long long)totalDiskSpace;
+ (long long)totalPhysicalMemory;
+ (id)model;
+ (id)deviceName;
+ (id)language;
+ (id)ipv6;
+ (id)bootTime;
@end
