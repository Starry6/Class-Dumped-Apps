@interface AWEPluginImageCustomImpl : NSObject
@property (nonatomic) NSMutableDictionary callbackDict;
@property (nonatomic) CAKModalTransitionDelegate transitionDelegate;
@property (nonatomic) AWEPhotosPreviewViewController photosPreviewVC;
@property (nonatomic) BDPUniqueID uniqueID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isOriginalImageSelected;
- (id)listViewConfigForAlbumViewController:;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:;
- (BOOL)albumViewController:shouldSelectAlbumAsset:;
- (void)albumViewControllerDidClickCancelButton:;
- (id)albumViewControllerConfigForFooter:;
- (id)albumViewControllerConfigForSelectedAssetsView:;
- (id)albumViewControllerViewForFooter:;
- (void)albumViewController:didClickNextButtonWithSourceType:fetchedAlbumAssets:;
- (void)albumViewController:didDismissWithPanProgress:;
- (void)setIsOriginalImageSelected:;
- (void)ironManpreviewImageWithThumbnailURLs:imageURLs:model:;
- (id)getImageReqConfigsWithModel:;
- (void)showMenu:;
- (void)setPhotosPreviewVC:;
- (id)photosPreviewVC;
- (id)bdp_getPHAssetWithImage:;
- (void)bdp_showImagePickerWithModel:completion:;
- (BOOL)isOriginalImageSelected;
- (void)bdp_previewImageWithModel:;
- (void)setCallbackDict:;
- (id)init;
- (id)uniqueID;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)setTransitionDelegate:;
- (id)transitionDelegate;
- (id)callbackDict;
+ (id)sharedPlugin;
@end
