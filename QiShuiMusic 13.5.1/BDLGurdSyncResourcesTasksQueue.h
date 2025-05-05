@interface BDLGurdSyncResourcesTasksQueue : NSObject
@property (nonatomic) NSMutableDictionary tasksDictionary;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
- (id)tasksDictionary;
- (BOOL)containsTask:;
- (void)setTasksDictionary:;
- (id)taskForIdentifier:;
- (void)removeTask:;
- (BOOL)addTask:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)allTasks;
@end
