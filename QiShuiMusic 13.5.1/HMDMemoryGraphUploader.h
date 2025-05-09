@interface HMDMemoryGraphUploader : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> uploadQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> uploadSemaphore;
@property (nonatomic) <HMDTTMonitorServiceProtocol> ttmonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uploadSemaphore;
- (void)asyncCheckAndUpload;
- (void)checkServerStateWithPrepareCount:activateManner:finishBlock:;
- (void)cleanCounterWithIdentifier:;
- (void)cleanPreparedFiles;
- (BOOL)deleteZipFileIfNeedWithIdentifier:;
- (id)fetchPendingIdentifiers;
- (void)increaseCounterWithIdentifier:;
- (void)internal_uploadIdentifier:activateManner:finishBlock:;
- (id)moduleNetworkProviderConfigHosts;
- (id)moduleNetworkProviderDefaultHosts;
- (id)moduleNetworkProviderInjectedHosts;
- (void)prepareOnProcessingDirectory;
- (BOOL)removeFileImmediately:;
- (BOOL)safeCreateZipFileAtPath:withContentsOfDirectory:;
- (void)setTtmonitor:;
- (void)setUploadSemaphore:;
- (id)ttmonitor;
- (void)uploadIdentifier:activateManner:needCheckServer:finishBlock:;
- (void)uploadMemoryGraphIfNeeded;
- (void)uploadPreparedFiles;
- (id)zipFileCounterDic;
- (id)init;
- (id)uploadQueue;
- (void).cxx_destruct;
- (void)setUploadQueue:;
- (BOOL)shouldEncrypt;
+ (id)checkEnvParamsWithIdentifier:;
+ (void)cleanupIdentifier:;
+ (id)memoryGraphPreparedPath;
+ (id)memoryGraphProcessingPath;
+ (id)memoryGraphRootPath;
+ (id)removableFileDirectoryPath;
@end
