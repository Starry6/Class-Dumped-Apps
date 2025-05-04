@interface AWEIMActiveUserUtils : NSObject
+ (double)currentServerTime;
+ (BOOL)isOnlineWithTimestamp:;
+ (id)stringForTimestamp:;
+ (BOOL)canShowActiveStatusWithTimestamp:;
+ (id)onlineDegradeStringForTimestamp:;
+ (long long)intervalDaysWithTimestamp:;
+ (long long)p_daysFromDate:toDateTime:;
+ (double)getCurrentTime;
@end
