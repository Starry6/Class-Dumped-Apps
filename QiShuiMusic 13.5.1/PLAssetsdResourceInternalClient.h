@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient
- (void)batchSaveAssetsWithJobDictionaries:completionHandler:;
- (void)requestMasterThumbnailForAssetUUID:completionHandler:;
@end
