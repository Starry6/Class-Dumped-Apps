@interface IESEffectDownloadQueue : NSObject
@property (nonatomic) IESEffectConfig config;
@property (nonatomic) IESManifestManager manifestManager;
@property (nonatomic) NSMutableDictionary downloadingTasks;
@property (nonatomic) NSMutableDictionary taskGroupMap;
@property (nonatomic) NSMapTable downloadTaskMap;
- (id)downloadTaskMap;
- (id)initWithConfig:manifestManager:;
- (void)cancelDownloadWithEffectModel:;
- (void)downloadAlgorithmModel:progress:completion:;
- (void)downloadEffectModel:downloadQueuePriority:downloadQualityOfService:progress:completion:;
- (void)downloadEffectModel:progress:completion:;
- (id)downloadingTasks;
- (void)insertFrontDownloadEffectModel:cancelDownloading:progress:completion:;
- (void)insertFrontDownloadEffectModel:downloadQueuePriority:downloadQualityOfService:progress:completion:;
- (BOOL)mergeDownloadTaskIfNeedWithTaskKey:originDownload:progress:completion:;
- (void)pauseDownloadWithEffectModel:;
- (void)setDownloadTaskMap:;
- (void)setDownloadingTasks:;
- (void)setManifestManager:;
- (void)setTaskGroupMap:;
- (id)taskGroupMap;
- (void)setConfig:;
- (id)manifestManager;
- (void).cxx_destruct;
- (id)config;
@end
