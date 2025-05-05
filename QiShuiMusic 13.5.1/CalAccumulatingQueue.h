@interface CalAccumulatingQueue : NSObject
- (void)_scheduleTimerWithDelay:;
- (void)updateTagsAndExecuteBlock:withContext:;
- (id)initWithQueue:andBlock:;
- (id)initWithQueue:andBlock:throttle:;
- (id)_initWithQueue:andBlock:delay:throttle:;
- (void)updateTags:;
- (void)_executeBlockWithThrottleBlock;
- (void)updateTagsAndExecuteBlock:;
- (id)initWithQueue:andBlock:delay:;
- (void)_callTargetBlockAndReset;
- (void)_cancelPendingTimer;
- (void)executeBlock;
- (void).cxx_destruct;
- (void)_executeBlockWithoutThrottleBlock;
- (void)updateTags:withContext:;
@end
