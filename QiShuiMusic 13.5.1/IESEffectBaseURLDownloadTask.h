@interface IESEffectBaseURLDownloadTask : IESEffectBaseDownloadTask
@property (nonatomic) NSArray fileDownloadURLs;
@property (nonatomic) BOOL needUnZip;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? afterDownloadSuccessBlock;
@property (nonatomic) @? resourceFileExistBlock;
@property (nonatomic) NSDictionary downloadParameters;
@property (nonatomic) BOOL paused;
@property (nonatomic) q downloadStatus;
@property (nonatomic) NSDictionary businessParameters;
- (id)afterDownloadSuccessBlock;
- (id)businessParameters;
- (void)callCompletionBlocks:error:extraInfoDict:;
- (BOOL)cleanUpWithDestination:error:;
- (void)downloadFileWithURLs:downloadPath:downloadProgress:completion:;
- (id)downloadParameters;
- (id)fileDownloadURLs;
- (BOOL)handleDownloadedFileWithDownloadPath:error:;
- (id)initWithFileDownloadURLs:fileMD5:destination:needUnZip:;
- (BOOL)needUnZip;
- (id)resourceFileExistBlock;
- (void)setAfterDownloadSuccessBlock:;
- (void)setBusinessParameters:;
- (void)setDownloadParameters:;
- (void)setFileDownloadURLs:;
- (void)setNeedUnZip:;
- (void)setResourceFileExistBlock:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (BOOL)isPaused;
- (void)setPaused:;
- (void)startWithCompletion:;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (long long)downloadStatus;
- (void)setDownloadStatus:;
@end
