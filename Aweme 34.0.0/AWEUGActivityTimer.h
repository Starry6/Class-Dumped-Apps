@interface AWEUGActivityTimer : NSObject
+ (void)cancelTimerTaskWithIdentifier:;
+ (id)executeTask:delay:interval:repeats:async:;
@end
