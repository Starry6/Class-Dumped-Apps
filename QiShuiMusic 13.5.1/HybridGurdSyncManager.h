@interface HybridGurdSyncManager : NSObject
@property (nonatomic) NSMutableArray waitingTasksQueue;
- (void)_cancelWaitingTask:;
- (BOOL)_enqueueSyncResourcesTask:;
- (void)_syncResources;
- (void)_syncResourcesIfNeeded;
- (void)_syncResourcesWithTask:;
- (id)_waitingTaskForTask:;
- (void)setWaitingTasksQueue:;
- (id)waitingTasksQueue;
- (void).cxx_destruct;
+ (void)disableGurd;
+ (void)enableGurd;
+ (void)enableHighPrioritySync;
+ (void)enqueueSyncResourcesTask:;
+ (void)syncResourcesIfNeeded;
+ (id)sharedManager;
@end
