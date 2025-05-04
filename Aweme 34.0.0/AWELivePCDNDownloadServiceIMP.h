@interface AWELivePCDNDownloadServiceIMP : NSObject
@property (nonatomic) NSInteger errorCodeOnLaunch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_launchConfigStrWithConfig:;
- (void)setErrorCodeOnLaunch:;
- (BOOL)p_isPCDNDownloaderLaunched;
- (int)errorCodeOnLaunch;
- (void)launchDownloadServiceWithConfig:launchError:;
- (void)stopDownloadService;
- (void)createDownloadTaskWithUrl:fileUniqId:filePath:completeHandler:taskStartError:;
- (void)safeDeleteDownloadedFileWithFilePath:error:;
- (id)init;
@end
