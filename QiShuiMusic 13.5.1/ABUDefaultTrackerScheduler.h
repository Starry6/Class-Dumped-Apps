@interface ABUDefaultTrackerScheduler : ABUTrackerScheduler
@property (nonatomic) ^v queueKey;
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
- (void)_dealNextTask;
- (void)_dealTask:;
- (id)queueKey;
- (void)setQueueKey:;
- (id)init;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:;
- (void)executeTask:;
@end
