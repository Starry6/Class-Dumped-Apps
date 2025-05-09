@interface SSSoftwareDownload : SSDownload
@property (nonatomic) ASDJob job;
- (void)setStatus:;
- (long long)bytesDownloaded;
- (double)percentComplete;
- (id)metadata;
- (id)failureError;
- (void)setMetadata:;
- (void)resume;
- (id)valueForProperty:;
- (id)job;
- (BOOL)isCancelable;
- (void).cxx_destruct;
- (void)restart;
- (id)status;
- (void)pause;
- (id)initWithPersistentIdentifier:;
- (id)downloadPhaseIdentifier;
- (id)assetsForType:;
- (void)setDownloadHandler:completionBlock:;
- (long long)bytesTotal;
- (BOOL)addAsset:forType:;
- (void)prioritizeAboveDownload:completionBlock:;
- (id)downloadPolicy;
- (void)setDownloadPolicy:;
- (long long)downloadSizeLimit;
- (BOOL)removeAsset:;
- (void)setNetworkConstraints:;
- (id)networkConstraints;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (BOOL)isEligibleForRestore:;
- (void)setBackgroundNetworkingJobGroupName:;
- (void)setValuesWithStoreDownloadMetadata:;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (void)setBackgroundNetworkingUserInitiated:;
- (void)_becomeManagedOnConnection:;
- (id)initWithJob:;
@end
