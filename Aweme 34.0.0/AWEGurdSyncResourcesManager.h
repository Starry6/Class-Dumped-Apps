@interface AWEGurdSyncResourcesManager : NSObject
@property (nonatomic) NSMutableArray waitingTasksQueue;
- (void)setWaitingTasksQueue:;
- (id)_waitingTaskForTask:;
- (void)_cancelWaitingTask:;
- (BOOL)_enqueueSyncResourcesTask:;
- (void)_syncResourcesWithTask:;
- (void)_syncResources;
- (id)waitingTasksQueue;
- (void)_syncResourcesIfNeeded;
- (void)_syncResourcesWithTask:completion:;
- (void).cxx_destruct;
+ (void)syncResourcesIfNeeded;
+ (BOOL)enqueueSyncResourcesTask:;
+ (void)enableGurd;
+ (id)sharedManager;
@end
