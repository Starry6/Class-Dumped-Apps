@interface AWEAIGCAsyncTaskManagerImpl : NSObject
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
@property (nonatomic) NSMutableArray taskIds;
@property (nonatomic) NSMutableDictionary taskDict;
@property (nonatomic) AWEAIPropTaskMessenger messenger;
@property (nonatomic) double lastQueryTime;
@property (nonatomic) double lastGeneratingPushShowTime;
@property (nonatomic) Q queryScene;
@property (nonatomic) AWEPropAsyncGenerateNetHelper asyncNetHelper;
@property (nonatomic) NSObject<OS_dispatch_queue> downloadQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (id)rwLock;
- (void)setRwLock:;
- (id)taskIds;
- (void)setTaskIds:;
- (void)setTaskDict:;
- (void)handleWillEnterForegroundNotification:;
- (void)handleNoticeRouterWithParams:completion:;
- (void)noticeCanDirectJump2Edit:completion:;
- (id)getTaskWithTaskId:;
- (id)fetchTaskInfoWithDraftID:;
- (id)getTaskWithDraftId:;
- (unsigned long long)queryScene;
- (void)restoreTasks;
- (void)startListeningMessage;
- (void)storeTasks;
- (void)handleEnterDraftBoxNotification:;
- (void)handleDraftDeleteNotification:;
- (void)setQueryScene:;
- (void)queryTaskStatesWhenLaunchedWithQuerySource:;
- (void)cancelTasksWithIds:AITypes:;
- (void)queryTaskStatesIfNeededWithQuerySource:;
- (void)removeTaskWithTaskId:;
- (void)saveTask:taskId:;
- (void)setLastGeneratingPushShowTime:;
- (double)lastGeneratingPushShowTime;
- (void)queryStateTasksStateWithQuerySource:;
- (id)asyncNetHelper;
- (void)p_handleQueryResponse:;
- (id)storeRenderImageWithImageData:withName:taskID:;
- (void)queryTaskInTemplateWithTaskId:;
- (void)handleLoraLiveQueryWithParam:completion:;
- (void)noticeNoNeedQueryDirectJump2Edit:completion:;
- (void)storeTasksWithThreshold;
- (void)aiTaskDidUpdateStatusMessenger:;
- (id)createTaskWithParams:;
- (id)fetchTaskInfoWithTaskID:;
- (void)showAIGCGeneratingNotificationWithTaskId:;
- (BOOL)isAIGCGeneratingNotificationShowing;
- (void)getLocalTaskProcessWithDraftId:completion:;
- (void)monitorAIGCImageDownloadWithDraftId:downloadDuration:errorCode:errorMessage:;
- (void)handleSingleQueryTaskReceive:;
- (void)openDraftWithGeneratedDraftId:;
- (void)saveDraftWithResultModel:taskID:completion:;
- (void)changeTaskStatus:taskId:draftId:;
- (void)updateTaskWithTaskId:finalTaskId:;
- (void)queryTaskStatesIfNeededInLaunched;
- (unsigned long long)getTaskStatusWithDraftId:;
- (double)getTaskEstimationDurationWithDraftId:;
- (id)getWaitTimeTipWithDraftId:;
- (void)setAsyncNetHelper:;
- (id)init;
- (void)dealloc;
- (void)setLastQueryTime:;
- (id)messenger;
- (void)setDownloadQueue:;
- (void).cxx_destruct;
- (double)lastQueryTime;
- (id)downloadQueue;
- (void)setMessenger:;
- (id)taskDict;
+ (id)sharedInstance;
@end
