@interface AWEPluginMediaCustomImpl : NSObject
@property (nonatomic) CAKModalTransitionDelegate transitionDelegate;
@property (nonatomic) NSMutableDictionary callbackDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)listViewConfigForAlbumViewController:;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:;
- (BOOL)albumViewController:shouldSelectAlbumAsset:;
- (void)albumViewControllerDidClickCancelButton:;
- (id)albumViewControllerConfigForSelectedAssetsView:;
- (void)albumViewController:didClickNextButtonWithSourceType:fetchedAlbumAssets:;
- (void)albumViewController:didDismissWithPanProgress:;
- (void)setCallbackDict:;
- (void)bdp_showMediaPickerWithModel:completion:;
- (id)dealImageDataWithFetchedAlbumAssetsV2:albumViewController:;
- (id)dealImageDataWithFetchedAlbumAssets:albumViewController:;
- (id)dealVideoDataWithFetchedAlbumAssets:albumViewController:;
- (void)dismissVCAnimatedWithViewController:images:videos:;
- (id)init;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)setTransitionDelegate:;
- (id)transitionDelegate;
- (id)callbackDict;
+ (id)sharedPlugin;
@end
