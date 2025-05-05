@interface IESECLaunchTask : NSObject
+ (void)executeTaskLevelHigh;
+ (void)executeTaskLevelNormal;
+ (double)launchTime;
+ (void)p_executeTaskLevelLowAsync;
@end
