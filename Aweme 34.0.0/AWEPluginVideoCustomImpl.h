@interface AWEPluginVideoCustomImpl : NSObject
@property (nonatomic) NSMutableDictionary callbackDict;
@property (nonatomic) CAKModalTransitionDelegate transitionDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)listViewConfigForAlbumViewController:;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:;
- (void)albumViewControllerDidClickCancelButton:;
- (id)albumViewControllerConfigForFooter:;
- (id)albumViewControllerConfigForSelectedAssetsView:;
- (void)albumViewController:didClickNextButtonWithSourceType:fetchedAlbumAssets:;
- (void)albumViewController:didDismissWithPanProgress:;
- (void)setCallbackDict:;
- (void)bdp_showVideoPickerWithModel:completion:;
- (void)bdp_showAwemeVideoPickerWithModel:completion:;
- (id)init;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)setTransitionDelegate:;
- (id)transitionDelegate;
- (id)callbackDict;
+ (id)sharedPlugin;
@end
