@interface PHInternalAssetExportRequest : PHAssetExportRequest
- (void).cxx_destruct;
- (void)exportWithOptions:completionHandler:;
- (void)preflightExportWithOptions:assetAvailability:isProcessingRequired:fileURLs:info:;
- (id)_initWithAsset:variants:resourceRetrievalRequest:retrievalRequestProgressParent:;
+ (id)exportRequestForAsset:error:;
+ (id)exportRequestForAsset:variants:error:;
+ (id)_variantsForAsset:error:;
@end
