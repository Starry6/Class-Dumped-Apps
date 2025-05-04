@interface AWEFeedPendantVideoTask : AWEUGWatchVideoTask
- (double)taskDuration;
- (void)taskReportFinish;
- (void)trackFeedPendantTimingTaskManagerLogWithMessage:;
- (BOOL)validateTask;
- (id)initWithModel:;
- (void)addObserver;
- (void)stopTask;
+ (void)registerTaskDealer;
+ (id)taskType;
@end
