@interface IESEffectModelDownloadTask : IESEffectBaseDownloadTask
@property (nonatomic) q downloadStatus;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) IESManifestManager manifestManager;
@property (nonatomic) IESEffectModel effectModel;
@property (nonatomic) BOOL enableNewDownloader;
@property (nonatomic) BOOL paused;
- (void)setEffectModel:;
- (void)callCompletionBlocks:error:extraInfoDict:;
- (void)downloadFileWithURLs:downloadPath:downloadProgress:completion:;
- (id)effectModel;
- (BOOL)enableNewDownloader;
- (id)initWithEffectModel:destination:;
- (BOOL)p_cleanUpWithDestination:unzipPath:error:;
- (BOOL)p_handleDownloadedFileWithPath:unzipPath:destination:fileMD5:effectModel:error:;
- (void)pauseTask;
- (void)resumeTask;
- (void)setEnableNewDownloader:;
- (void)setManifestManager:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (BOOL)isPaused;
- (void)setPaused:;
- (void)startWithCompletion:;
- (id)manifestManager;
- (void).cxx_destruct;
- (void)cancelTask;
- (long long)downloadStatus;
- (void)setDownloadStatus:;
@end
