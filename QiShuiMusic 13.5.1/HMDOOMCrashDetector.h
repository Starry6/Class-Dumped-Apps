@interface HMDOOMCrashDetector : NSObject
+ (BOOL)findOrCreateDirectoryInPath:;
+ (id)logFileDictionary;
+ (void)setSystemStateUpdateInterval:;
+ (double)systemStateUpdateInterval;
+ (void)triggerCurrentEnvironmentInfomationSaving;
+ (void)triggerCurrentEnvironmentInfomationSavingWithAction:;
+ (void)triggerCurrentEnvironmentInformationSaving;
+ (void)triggerCurrentEnvironmentInformationSavingWithAction:;
+ (void)updateConfig:;
+ (void)start;
+ (void)stop;
+ (void)startWithDelegate:;
@end
