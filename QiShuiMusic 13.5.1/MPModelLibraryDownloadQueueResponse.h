@interface MPModelLibraryDownloadQueueResponse : MPModelResponse
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequest:;
- (void)dealloc;
- (void)downloadManager:didEnqueueAssetDownloads:didRemoveAssetDownloads:;
- (void)downloadManager:didFinishAsset:withError:;
- (void)getChangeDetailsFromPreviousResponse:completion:;
@end
