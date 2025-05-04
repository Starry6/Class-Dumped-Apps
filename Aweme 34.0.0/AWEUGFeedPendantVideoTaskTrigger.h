@interface AWEUGFeedPendantVideoTaskTrigger : AWEUGVideoTaskTrigger
- (void)pauseTask;
- (void)resumeTask;
- (void)trackFeedPendantTimingTaskManagerLogWithMessage:;
- (BOOL)feedPendantHasWatchVideoTaskInProcess;
- (id)triggerReasonForInfo:;
- (void)dealloc;
- (id)initWithModel:;
- (void)addObserver;
@end
