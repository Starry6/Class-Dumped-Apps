@interface CPLSyncStep : NSObject
@property (nonatomic) CPLEngineLibrary engineLibrary;
@property (nonatomic) CPLEngineStore engineStore;
@property (nonatomic) CPLEngineSyncManager syncManager;
@property (nonatomic) CPLSyncSession syncSession;
@property (nonatomic) NSString descriptionForTasks;
@property (nonatomic) NSError lastError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)engineLibrary;
- (void)task:didFinishWithError:;
- (id)syncManager;
- (void)task:didProgress:userInfo:;
- (id)syncSession;
- (void).cxx_destruct;
- (id)lastError;
- (id)initWithSyncManager:syncSession:;
- (id)engineStore;
- (id)descriptionForTasks;
- (float)progressForTask:progress:;
- (BOOL)launchNecessaryTasks;
- (void)cancelAllTasks:;
- (BOOL)didFinishTask:withError:shouldStop:;
- (void)moveTasksToBackground;
- (BOOL)prepareAndLaunchSyncTask:;
- (void)setErrorForSyncSession:;
@end
