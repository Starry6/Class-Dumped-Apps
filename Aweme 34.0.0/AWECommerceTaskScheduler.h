@interface AWECommerceTaskScheduler : HTSService
@property (nonatomic) AWECommerceTaskQueue taskQueue;
@property (nonatomic) Q executeNumber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)vc_viewDidAppearWith:;
- (void)executeAvoidFeedTasks;
- (void)executeRunloopBeforeWaitingTasks;
- (void)executeAvoidPrefetchTasks;
- (void)setExecuteNumber:;
- (void)executeTasks:;
- (unsigned long long)executeNumber;
- (void)addTask:;
- (BOOL)removeTask:;
- (unsigned long long)moduleNames;
- (id)taskQueue;
- (void).cxx_destruct;
- (void)setTaskQueue:;
@end
