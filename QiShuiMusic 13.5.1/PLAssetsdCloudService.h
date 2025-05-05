@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resourceDownloader;
- (void).cxx_destruct;
- (void)requestVideoPlaybackURLForCloudSharedAsset:mediaAssetType:reply:;
- (void)cancelCPLDownloadTaskWithIdentifier:reply:;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:taskIdentifier:resourceType:HighPriority:trackCPLDownload:downloadIsTransient:reply:;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:doneTokens:format:reply:;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:reply:;
- (void)computeFingerPrintsOfAssetWithObjectURI:synchronously:reply:;
- (id)initWithLibraryServicesManager:lazyResourceDownloader:;
@end
