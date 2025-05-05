@interface IESFileDownloadStrategy : NSObject
@property (nonatomic) NSOperationQueue downloadQueue;
@property (nonatomic) NSMapTable taskOperationMap;
@property (nonatomic) NSMutableArray executeTaskQueue;
@property (nonatomic) NSMutableArray waitTaskQueue;
@property (nonatomic) IESEffectDownloadFlowConflictMonitor monitor;
- (void)addDownloadTask:cancelExistDownloading:insertFront:;
- (id)executeTaskQueue;
- (id)initWithDownloadQueue:taskOperationMap:;
- (void)moveWaitTaskToExecute;
- (void)pauseOneExecuteTaskIfNeed;
- (void)resumeTaskWithKeyIfNeed:insertFront:cancelDownloading:downloadProgress:completion:;
- (void)setExecuteTaskQueue:;
- (void)setTaskOperationMap:;
- (void)setWaitTaskQueue:;
- (id)taskOperationMap;
- (void)updateDownloadTask:;
- (void)updateFlowConflictMonitor:;
- (id)waitTaskQueue;
- (id)downloadQueue;
- (void)setDownloadQueue:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
