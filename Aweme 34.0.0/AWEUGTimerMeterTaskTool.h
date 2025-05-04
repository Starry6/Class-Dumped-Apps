@interface AWEUGTimerMeterTaskTool : NSObject
+ (void)trackLogWithKey:message:;
+ (void)trackLogToastWithKey:message:;
+ (void)showToast:withFrequency:;
+ (long long)daysBetweenDate:toDate:;
+ (double)getCurrentTime;
@end
