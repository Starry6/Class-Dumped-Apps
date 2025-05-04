@interface AWEIMICloudAssetLoader : NSObject
@property (nonatomic) NSOperationQueue iCloudLoaderQueue;
- (id)loadAssetWithAssetIdentifier:loadLivePhotoImageAsVideoSource:messageId:progressHandler:completion:;
- (id)iCloudLoaderQueue;
- (id)loadAssetWithAssetIdentifier:messageId:progressHandler:completion:;
- (void)cancelOperationWithMessageId:;
- (void)setICloudLoaderQueue:;
- (id)init;
- (void).cxx_destruct;
@end
