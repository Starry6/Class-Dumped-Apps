@interface BiometricSupportTools : NSObject
+ (void)analyticsOSLogNSDictionary:forEvent:toLogPath:withPrefix:;
+ (void)analyticsOSLogNSDictionary:forEvent:;
+ (id)dateFromNanoTime:nanoseconds:;
@end
