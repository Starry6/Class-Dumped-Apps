@interface AWEAssetsCropAndClipViewModel : NSObject
@property (nonatomic) q pageType;
@property (nonatomic) BOOL isLivePhotoAsset;
@property (nonatomic) q livePhotoState;
@property (nonatomic) NSURL staticImageURL;
- (long long)livePhotoState;
- (void)setLivePhotoState:;
- (void)setIsLivePhotoAsset:;
- (void)setStaticImageURL:;
- (BOOL)isLivePhotoAsset;
- (void)setPageType:;
- (void).cxx_destruct;
- (long long)pageType;
- (id)staticImageURL;
@end
