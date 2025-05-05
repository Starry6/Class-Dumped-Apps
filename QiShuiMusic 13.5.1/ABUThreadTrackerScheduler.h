@interface ABUThreadTrackerScheduler : ABUTrackerScheduler
@property (nonatomic) BOOL markDestory;
@property (nonatomic) NSThread thread;
- (id)destory;
- (void)setMarkDestory:;
- (void)_realExecuteTask:;
- (void)_triggerNext;
- (BOOL)markDestory;
- (id)thread;
- (id)init;
- (void).cxx_destruct;
- (void)setThread:;
- (void)executeTask:;
@end
