@interface AWEECCpsTrackerLogger : NSObject
+ (void)trackEvent:withParams:;
+ (void)logMessage:level:;
+ (id)toEventStr:;
@end
