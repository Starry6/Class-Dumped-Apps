@interface CPLSimpleTaskSyncStep : CPLSyncStep
@property (nonatomic) # taskClass;
@property (nonatomic) CPLEngineSyncTask currentTask;
- (void).cxx_destruct;
- (id)currentTask;
- (id)descriptionForTasks;
- (BOOL)launchNecessaryTasks;
- (void)cancelAllTasks:;
- (BOOL)didFinishTask:withError:shouldStop:;
- (void)moveTasksToBackground;
- (id)initWithSyncManager:syncSession:taskClass:;
- (id)newTask;
- (Class)taskClass;
@end
