@interface PLAssetsdCloudClient : PLAssetsdBaseClient
- (void)computeFingerPrintsOfAsset:synchronously:completionHandler:;
- (void)cancelCPLDownloadWithContext:completionHandler:;
- (void)requestCPLDownloadImageDataForAssets:format:doneTokens:completionHandler:;
- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:completionHandler:;
- (void)requestVideoPlaybackURLForCloudSharedAsset:mediaAssetType:completionHandler:;
- (void)downloadCloudPhotoLibraryAsset:resourceType:highPriority:trackCPLDownload:downloadIsTransient:proposedTaskIdentifier:completionHandler:;
@end
