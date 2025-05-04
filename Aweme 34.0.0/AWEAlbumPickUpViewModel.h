@interface AWEAlbumPickUpViewModel : AWEAlbumBaseViewModel
- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:;
- (void)goToNextWithMultiSelect:;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (BOOL)shouldSelectAlbumAsset:;
- (BOOL)needDisplayGreyModeWithAsset:;
- (void)updateBottomNextButtonWithButton:fromPreview:;
- (BOOL)shouldSelectAlbumAsset:enableToast:isSelect:;
- (BOOL)isHandleFilterSelectedAsset:;
- (id)handleFilterSelectedAssetResult:publishViewModel:;
@end
