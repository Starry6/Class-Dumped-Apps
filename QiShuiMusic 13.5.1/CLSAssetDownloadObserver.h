@interface CLSAssetDownloadObserver : NSObject
@property (nonatomic) CLSAbstractAsset asset;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) double downloadProgress;
@property (nonatomic) NSError downloadError;
@property (nonatomic) @? onDownloadProgress;
@property (nonatomic) @? onDownloadComplete;
- (double)downloadProgress;
- (id)initWithAsset:;
- (id)downloadError;
- (id)asset;
- (void)startObserving;
- (void)stopObserving;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setDownloaded:;
- (BOOL)isDownloaded;
- (id)onDownloadProgress;
- (void)setOnDownloadProgress:;
- (id)onDownloadComplete;
- (void)setOnDownloadComplete:;
@end
