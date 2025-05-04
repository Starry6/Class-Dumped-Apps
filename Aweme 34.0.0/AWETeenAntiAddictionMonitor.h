@interface AWETeenAntiAddictionMonitor : NSObject
+ (id)commonParams;
+ (void)monitorTimerFireSuccess:scene:;
+ (void)monitorTimerStopSuccess:scene:;
+ (void)monitorTimerCreateSuccess:;
+ (void)monitorAntiAddictionUsage;
+ (void)monitorTimeLockShow;
+ (void)monitorTimeLockPageNotifySuccess:topVC:;
+ (void)monitorNightLockPageNotifySuccess:topVC:;
+ (void)monitorTimeLockDismiss;
+ (void)monitorNightLockShow;
+ (void)monitorNightLockDismiss;
+ (void)monitorScreenTimeRecordParams:error:;
+ (void)monitorMinorSettingsError:;
+ (void)monitorTimerCalibrateParams:;
@end
