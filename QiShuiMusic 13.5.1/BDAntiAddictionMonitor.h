@interface BDAntiAddictionMonitor : NSObject
+ (void)bdaa_trackService:metric:category:extra:;
+ (id)commonParams;
+ (void)monitorAntiAddictionEscapeIfNeeded;
+ (void)monitorAntiAddictionUsage;
+ (void)monitorNightLockDismiss;
+ (void)monitorNightLockPageNotifySuccess:topVC:;
+ (void)monitorNightLockShow;
+ (void)monitorTeenAntiAddictionLockWithEvent:action:unlockReason:;
+ (void)monitorTeenStatusEventWithEvent:action:setPassword:;
+ (void)monitorTimeLockDismiss;
+ (void)monitorTimeLockPageNotifySuccess:topVC:;
+ (void)monitorTimeLockShow;
@end
