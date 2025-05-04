@interface AWEPopViewMonitor : NSObject
+ (void)trackEvent:params:;
+ (void)checkMainThread:;
+ (void)startMonitorShowTimeoutWithAlert:;
+ (void)trackWithAlertWrapper:extraParams:;
+ (void)startMonitorCloseTimeoutWithAlert:;
+ (void)startMonitorShowTimeoutWithForceAlert:;
+ (void)startMonitorCloseTimeoutWithForceAlert:;
+ (void)trackWithForceAlertWrapper:extraParams:;
+ (long long)normalTaskShowTimeoutWithAlertID:;
+ (long long)normalTaskCloseTimeoutWithAlertID:;
+ (long long)forceTaskShowTimeoutWithAlertID:;
+ (long long)forceTaskCloseTimeoutWithAlertID:;
+ (BOOL)enableMainThreadAssert;
+ (id)configWithAlertID:;
+ (BOOL)enable;
@end
