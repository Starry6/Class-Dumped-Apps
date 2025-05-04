@interface AWEIMAlbumAssetPrepareManager : NSObject
@property (nonatomic) NSOperationQueue preprocessQueue;
- (id)preprocessQueue;
- (void)setPreprocessQueue:;
- (void).cxx_destruct;
+ (long long)getAlbumAssetTypeWithMediaType:isLivePhoto:;
+ (id)getAlbumAssetPreprocessorWithContext:;
+ (id)prepareAssetWithLocalAsset:asset:isLivePhoto:useOrigin:;
+ (void)onUseOriginDidSwitchWithAsset:useOrigin:;
+ (id)prepareAssetWithMessage:;
+ (id)prepareCameraPublishPreProcessorWithType:taskID:;
+ (id)sharedInstance;
@end
