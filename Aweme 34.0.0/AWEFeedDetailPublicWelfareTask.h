@interface AWEFeedDetailPublicWelfareTask : AWEUGWatchVideoTask
- (void)taskReportFinish;
- (id)initWithModel:;
- (void)addObserver;
- (void)stopTask;
+ (void)registerTaskDealer;
+ (BOOL)stopOldWhenGlobalTaskIdConflict;
+ (id)taskType;
@end
