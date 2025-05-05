@interface BNProcessHelper : NSObject
+ (BOOL)isLaunchFromBoot;
+ (id)p_collectProcessDetail;
+ (id)p_taskFaults;
+ (id)p_threadList;
+ (BOOL)processInfoForPID:procInfo:;
+ (double)processStartUnixTime;
@end
