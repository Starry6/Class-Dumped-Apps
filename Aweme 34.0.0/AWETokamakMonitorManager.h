@interface AWETokamakMonitorManager : NSObject
+ (void)relaunchWithReason:;
+ (unsigned long long)relacunchReason;
+ (id)generateReportData:;
+ (id)getTempZipFile:;
+ (id)headerMonitor:;
+ (BOOL)report;
@end
