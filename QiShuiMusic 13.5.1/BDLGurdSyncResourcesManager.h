@interface BDLGurdSyncResourcesManager : NSObject
@property (nonatomic) BDLGurdSyncResourcesTasksQueue waitingTasksQueue;
@property (nonatomic) BDLGurdSyncResourcesTasksQueue executedTasksQueue;
- (void)_cancelWaitingTask:;
- (BOOL)_enqueueSyncResourcesTask:;
- (BOOL)_shouldExecuteWithTask:;
- (void)_syncResources;
- (void)_syncResourcesIfNeeded;
- (void)_syncResourcesWithTask:;
- (id)_waitingTaskForIdentifier:;
- (id)executedTasksQueue;
- (void)setExecutedTasksQueue:;
- (void)setWaitingTasksQueue:;
- (id)waitingTasksQueue;
- (void).cxx_destruct;
+ (void)enableGurd;
+ (void)enqueueSyncResourcesTask:;
+ (void)syncResourcesIfNeeded;
+ (id)sharedManager;
@end
