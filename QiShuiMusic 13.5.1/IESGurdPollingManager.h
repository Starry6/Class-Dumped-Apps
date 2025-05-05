@interface IESGurdPollingManager : NSObject
+ (void)createOrUpdateTimerWithRequest:;
+ (void)addPollingConfigWithParams:;
+ (BOOL)isPollingEnabled;
+ (long long)pollingIntervalWithPriority:;
+ (void)sendPollingRequest:;
+ (id)timerWithRequest:interval:;
+ (void)updatePollingIntervals:;
@end
