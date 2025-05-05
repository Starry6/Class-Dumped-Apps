@interface DownloadResultNotification : NSObject
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSString secondUrl;
@property (nonatomic) q code;
@property (nonatomic) NSString downloadedFilePath;
@property (nonatomic) TTDownloadTrackModel trackModel;
@property (nonatomic) NSMutableArray httpResponseArray;
@property (nonatomic) NSString downloaderLog;
- (void)addLog:;
- (id)downloadedFilePath;
- (id)downloaderLog;
- (id)httpResponseArray;
- (id)secondUrl;
- (void)setDownloadedFilePath:;
- (void)setDownloaderLog:;
- (void)setHttpResponseArray:;
- (void)setSecondUrl:;
- (void)setTrackModel:;
- (id)trackModel;
- (long long)code;
- (void).cxx_destruct;
- (void)setCode:;
- (id)copyWithZone:;
- (id)urlKey;
- (void)setUrlKey:;
@end
