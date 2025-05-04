@interface AWEUltraCreationAlbumViewModel : AWEAlbumBaseViewModel
@property (nonatomic) AUCDTOPageAlbum pageConfig;
@property (nonatomic) @? dismissBlock;
- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:;
- (id)initWithInputData:;
- (void)goToNextWithMultiSelect:;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (BOOL)shouldSelectAlbumAsset:;
- (BOOL)needDisplayGreyModeWithAsset:;
- (void)updateBottomNextButtonWithButton:fromPreview:;
- (BOOL)p_shouldSelectAlbumAsset:;
- (void)showAlertWhenSelectAsset:;
- (BOOL)availableMinCount:;
- (void).cxx_destruct;
- (id)footerTitle;
- (id)pageConfig;
- (void)setPageConfig:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
