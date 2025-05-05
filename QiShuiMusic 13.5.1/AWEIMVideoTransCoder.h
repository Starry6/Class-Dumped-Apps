@interface AWEIMVideoTransCoder : NSObject
@property (nonatomic) NSOperationQueue transcodeQueue;
@property (nonatomic) AWEIMPhotoAlbumLoader assetLoader;
- (void)cancelOperationWithMessageId:;
- (void)setTranscodeQueue:;
- (id)transcodeQueue;
- (id)transcodeVideoAsset:messageId:completion:;
- (id)transcodeVideoAssetWithAssetIdentifier:locoalVideoPath:messageId:completion:;
- (id)init;
- (id)assetLoader;
- (void).cxx_destruct;
- (void)setAssetLoader:;
@end
