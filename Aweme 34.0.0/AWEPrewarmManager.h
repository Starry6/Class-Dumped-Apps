@interface AWEPrewarmManager : NSObject
@property (nonatomic) q lastBadgeNumber;
- (void)p_setup;
- (void)p_postLocalNotificationIfNeeded:;
- (void)p_trackIfNeeded;
- (BOOL)p_canPostLocalNotiWithType:;
- (long long)lastBadgeNumber;
- (void)p_postLocalNotification;
- (BOOL)p_canPostLocalNotiOnCrash;
- (BOOL)p_canPostLocalNotiOnAppWillTerminate;
- (BOOL)p_onCrashEnable;
- (long long)p_crashTimeInterval;
- (BOOL)p_onWillTerminateEnable;
- (id)p_terminateValidTimes;
- (BOOL)p_isCurrentTimeBetween:endTimeStr:timeFormat:;
- (id)p_prewarmConfig;
- (void)setLastBadgeNumber:;
+ (id)sharedInstance;
@end
