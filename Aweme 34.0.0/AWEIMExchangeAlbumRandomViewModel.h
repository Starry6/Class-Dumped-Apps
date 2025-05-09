@interface AWEIMExchangeAlbumRandomViewModel : AFDMomentCameraBaseViewModel
@property (nonatomic) BOOL isPreLoading;
@property (nonatomic) BOOL isBeginRandom;
@property (nonatomic) BOOL shouldShowRandomView;
@property (nonatomic) BOOL shouldShowRandomButton;
@property (nonatomic) BOOL isRandonResult;
@property (nonatomic) double imageLoadSize;
@property (nonatomic) AFDMomentCameraPreviewViewModel previewViewModel;
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
@property (nonatomic) NSString lastAssetIdentifier;
- (void)setupViewModel;
- (id)previewViewModel;
- (id)p_resizeImage:;
- (id)flowService;
- (void)setFlowService:;
- (void)p_updateWithState:;
- (double)getRandomAnimationCount;
- (double)getRandomAnimationInterval;
- (BOOL)shouldShowRandomButton;
- (void)loadICloudPhotoWithPHAsset:progressHandler:completion:;
- (void)loadPictureRandomWithCompletion:completion:;
- (void)setImageLoadSize:;
- (void)setIsRandonResult:;
- (BOOL)isPreLoading;
- (void)setIsPreLoading:;
- (void)loadPictureRandomWithCompletionOptimize:completion:;
- (id)handleResourceArraySize:;
- (void)resetPreLoadingState:;
- (void)loadBatchsPhotoWithIndex:loadCount:photos:hightQualityImages:deliveryMode:needFilter:completion:;
- (void)loadBatchsPhotoWithIndex:loadCount:photos:hightQualityImages:deliveryMode:completion:;
- (void)loadHighQualityPhotoWithModel:deliveryMode:needDonwloadICloud:completion:;
- (id)lastAssetIdentifier;
- (void)setLastAssetIdentifier:;
- (void)loadPhotosBytesWithArray:deliveryMode:completion:;
- (double)imageLoadSize;
- (void)setIsBeginRandom:;
- (double)getRandomAnimationDuration;
- (void)setShouldShowRandomView:;
- (BOOL)isRandonResult;
- (void)setShouldShowRandomButton:;
- (void)setBeginRandom:;
- (id)getRandomAnimationConfigDic;
- (BOOL)isBeginRandom;
- (BOOL)shouldShowRandomView;
- (void).cxx_destruct;
+ (id)p_fetchPHAssetsResult;
@end
