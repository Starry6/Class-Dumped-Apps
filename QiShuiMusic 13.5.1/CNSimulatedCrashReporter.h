@interface CNSimulatedCrashReporter : NSObject
+ (id)os_log;
+ (void)simulateCrashWithMessage:;
+ (void)simulateCrashWithCode:description:;
@end
