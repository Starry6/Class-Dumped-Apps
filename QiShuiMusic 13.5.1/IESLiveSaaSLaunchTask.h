@interface IESLiveSaaSLaunchTask : NSObject
+ (id)defaultTasks;
+ (void)delayExecuteTasks;
+ (id)importantTasks;
+ (id)insignificantTasks;
+ (void)onAppLaunch;
+ (void)syncExecuteTasks;
@end
