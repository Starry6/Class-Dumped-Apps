@interface AWELaunchProtectReporter : NSObject
+ (void)reportEvent:params:;
+ (void)reportEnterFirstTry;
+ (void)reportRestoreSuccessByFirstTry;
+ (void)reportRestoreSuccessBySafemode;
+ (void)reportEvent:extraInfo:;
+ (void)uploadKiteLogFromDaysBefore:scene:byUser:callback:;
+ (void)uploadKiteLogByLogPaths:scene:byUser:callback:;
+ (void)reportEnterSafemode;
+ (BOOL)hasReportEnterFirstTry;
+ (void)uploadKiteLogFromDaysBefore:scene:callback:;
+ (void)uploadKiteLogByLogPaths:scene:callback:;
@end
