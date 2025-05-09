@interface CKFileDownloaderImpl : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) NSInteger concurrent;
@property (nonatomic) NSMutableDictionary downloadingTaskMap;
@property (nonatomic) NSMutableDictionary waitDownloadTaskMap;
@property (nonatomic) NSMutableArray downloadingTaskQueue;
@property (nonatomic) NSMutableArray waitDownloadTaskQueue;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel:completion:;
- (void)download:progress:completion:;
- (id)downloadingTaskMap;
- (id)downloadingTaskQueue;
- (void)handleDownloadCallback:downloadTaskInfo:;
- (void)pause:completion:;
- (void)setDownloadingTaskMap:;
- (void)setDownloadingTaskQueue:;
- (void)setWaitDownloadTaskMap:;
- (void)setWaitDownloadTaskQueue:;
- (id)waitDownloadTaskMap;
- (id)waitDownloadTaskQueue;
- (id)init;
- (void)setConcurrent:;
- (int)concurrent;
- (void)setSemaphore:;
- (id)lock;
- (void).cxx_destruct;
- (id)semaphore;
- (void)setLock:;
+ (id)makeDownloadParametersWithParams:;
+ (id)sharedInstance;
@end
