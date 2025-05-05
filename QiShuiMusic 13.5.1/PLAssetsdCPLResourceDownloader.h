@interface PLAssetsdCPLResourceDownloader : NSObject
- (void)_handleInvalidation;
- (void)handleInvalidation;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:downloadContext:;
- (void)cancelCPLDownloadTaskWithIdentifier:completionHandler:;
- (void).cxx_destruct;
- (void)cancelCPLDownloadTasks:completionHandler:;
- (id)initWithPhotoLibrary:trustedCallerBundleID:clientConnection:;
- (id)startCPLDownloadForAsset:resourceType:masterResourceOnly:highPriority:track:notify:transient:proposedTaskIdentifier:doneToken:error:;
@end
