@interface AWEUGXTabOOMProtection : NSObject
+ (void)oomCrashDidFinishDetectWithNotification:;
+ (void)setXTabPageShowing:activityId:;
+ (void)markXTabHMDCustomFilterValuePageShowing:activityId:;
+ (void)clearOOMTimesWithActivityId:;
+ (void)markDowngrade:;
+ (BOOL)hitOOMProtectionWithActivityId:;
+ (BOOL)enableXTabOOMProtectionWithActivityId:;
+ (id)versionActivityId:;
+ (BOOL)private_hitOOMProtectionWithActivityId:;
+ (id)oomProtectionConfigWithActivityId:;
+ (void)setHMDCustomFilterValue:forKey:;
@end
