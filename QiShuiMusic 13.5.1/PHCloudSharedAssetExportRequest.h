@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest
- (void).cxx_destruct;
- (void)exportWithOptions:completionHandler:;
- (id)initWithAsset:variants:;
- (void)preflightExportWithOptions:assetAvailability:isProcessingRequired:fileURLs:info:;
- (void)exportWithOptions:networkAccessAllowed:completionHandler:;
- (void)_requestFileURLsForAsset:withOptions:networkAccessAllowed:progressHandler:resultHandler:;
- (int)_requestImageURLForAsset:networkAccessAllowed:progressHandler:resultHandler:;
- (int)_requestVideoURLForAsset:networkAccessAllowed:progressHandler:resultHandler:;
- (void)_requestLivePhotoURLsForAsset:networkAccessAllowed:progressHandler:resultHandler:;
- (void)_handleImageManagerResultForAsset:networkAccessAllowed:progress:processingUnitCount:options:withFileUrls:info:completionHandler:;
+ (id)exportRequestForAsset:error:;
@end
