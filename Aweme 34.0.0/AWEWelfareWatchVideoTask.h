@interface AWEWelfareWatchVideoTask : AWEUGWatchVideoTask
- (void)taskDidLeaveScene:;
- (void)triggerTaskIfNeededForTrigger:withReason:;
- (BOOL)isLegalPage;
+ (void)registerTaskDealer;
+ (id)taskType;
@end
