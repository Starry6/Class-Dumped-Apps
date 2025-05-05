@interface ABUTimer : NSObject
+ (void)cancelTimer:;
+ (id)startTimerInMode:execAction:after:interval:repeats:mainThread:;
+ (id)startTimerWithExecAction:after:interval:repeats:mainThread:;
@end
