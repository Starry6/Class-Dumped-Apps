@interface AWEFlyBirdUploadHelper : NSObject
@property (nonatomic) CAKModalTransitionDelegate transitionDelegate;
@property (nonatomic) <AWEStudioFlyBirdSelectionModel> selectionModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)listViewConfigForAlbumViewController:;
- (BOOL)albumViewController:shouldSelectAlbumAsset:;
- (void)albumViewControllerDidClickCancelButton:;
- (id)albumViewControllerConfigForSelectedAssetsView:;
- (void)albumViewController:didClickNextButtonWithSourceType:fetchedAlbumAssets:;
- (void)albumViewController:updateBottomNextButtonWithButton:fromPreview:;
- (id)selectionModel;
- (id)generateInfoDictForImage:videoPath:needBase64:;
- (void)setSelectionModel:;
- (id)saveImageToCache:phAsset:;
- (BOOL)p_validAssetModelForVideo:;
- (double)p_isExceededMaxSelectableDuration:withSelectAlbumAsset:;
- (void)copyVideoToCache:phAsset:completionHandler:;
- (void)showAlbumChooseVC:;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)setTransitionDelegate:;
- (id)transitionDelegate;
+ (id)sharedHelper;
@end
