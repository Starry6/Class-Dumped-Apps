@interface BDHMXUtilities : NSObject
+ (BOOL)isEmptyWithDic:;
+ (BOOL)isEmptyWithSet:;
+ (long long)appRuntime;
+ (id)getLibraVids;
+ (BOOL)getMonitorTagWith:;
+ (id)getPidWithString:;
+ (id)getSchemaBidWithString:;
+ (BOOL)isEmptyWithArray:;
+ (BOOL)isEmptyWithString:;
+ (BOOL)isReinstall;
+ (id)localRootPath;
+ (id)machineModel;
+ (double)systemMemoryUsageRate;
+ (double)virtualMemoryUsageRate;
+ (id)modelIdentifier;
+ (BOOL)isiOSAppOnMac;
@end
