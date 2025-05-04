@interface AWETributeTimingTask : AWEUGWatchVideoTask
- (id)taskToken;
- (void)executeWithJumpResult:openTaskCallback:;
- (void)taskReportFinish;
- (void)dealloc;
- (id)initWithModel:;
- (void)addObserver;
- (id)taskID;
- (void)stopTask;
+ (void)registerTaskDealer;
+ (BOOL)needPersistence;
+ (id)taskType;
@end
