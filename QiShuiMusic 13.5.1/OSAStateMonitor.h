@interface OSAStateMonitor : NSObject
+ (void)recordEvent:;
+ (id)dateForEvent:;
+ (id)keyForEvent:;
+ (void)checkSubmissionStatus;
+ (void)evaluateState;
+ (void)checkCALogWrittenStatus;
+ (void)postFailureWithReason:;
@end
