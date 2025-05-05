@interface MPLibraryKeepLocalStatusObserver : NSObject
@property (nonatomic) MPLibraryKeepLocalStatusObserverConfiguration configuration;
@property (nonatomic) {MPLibraryActiveKeepLocalStatus=qd} currentStatus;
@property (nonatomic) Q downloadPausedReason;
@property (nonatomic) @? statusBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_calculateCurrentStatus;
- (id)init;
- (void)dealloc;
- (void)downloadManager:didUpdateDownloadProgress:;
- (void)_transientStateDidChangeNotification:;
- (id)currentStatus;
- (void)_updateCurrentStatus;
- (void)setConfiguration:;
- (id)configuration;
- (unsigned long long)downloadPausedReason;
- (void).cxx_destruct;
- (void)setStatusBlock:;
- (BOOL)_updateActiveDownloadsAllowingDownloadRemoval:;
- (void)_handleDownloadStateChanged:;
- (void)downloadManager:didChangeDownloadPausedReasonForAssets:;
- (id)statusBlock;
- (void)downloadManager:didEnqueueAssetDownloads:didRemoveAssetDownloads:;
@end
