@interface VNControlledCapacityTasksQueue : NSObject
@property (nonatomic) q maximumTasksCount;
- (void).cxx_destruct;
- (id)description;
- (BOOL)currentQueueIsSynchronizationQueue;
- (id)initWithDispatchQueueLabel:maximumTasksCount:;
- (void)dispatchGroupAsyncByPreservingQueueCapacity:block:;
- (void)dispatchSyncByPreservingQueueCapacity:;
- (BOOL)dispatchGroupWait:error:;
- (void)dispatchReportBlockCompletion;
- (void)setMaximumTasksCount:;
- (long long)maximumTasksCount;
+ (void)setTasksTimeout:;
+ (long long)tasksTimeout;
@end
