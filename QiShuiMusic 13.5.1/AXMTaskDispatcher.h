@interface AXMTaskDispatcher : NSObject
@property (nonatomic) q count;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) <AXMTaskDispatcherDelegate> delegate;
- (BOOL)isEmpty;
- (void)setDelegate:;
- (id)initWithIdentifier:delegate:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)count;
- (void)scheduleTask:;
- (long long)_queue_count;
- (void)_queue_processNextTask;
- (void)_queue_scheduleTask:;
- (id)unscheduleAllTasks;
- (id)_queue_unscheduleAllTasks;
- (id)_queue_dequeueTask;
@end
