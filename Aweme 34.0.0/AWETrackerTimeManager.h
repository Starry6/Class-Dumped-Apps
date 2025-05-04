@interface AWETrackerTimeManager : NSObject
+ (void)syncTimingBlock:completion:;
+ (void)syncTimingBlock:timeout:timeoutHandler:;
+ (id)humanizeTimeStamp:;
@end
