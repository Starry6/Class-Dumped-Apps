@interface AWELaunchMainPlaceholder : NSObject
+ (void)crashPreMonitor;
+ (void)watchdogPreMonitor;
+ (void)loadProtectEnable;
+ (void)_registerStorageErrorsReporter;
+ (void)_addBootLoaderLogs:;
@end
