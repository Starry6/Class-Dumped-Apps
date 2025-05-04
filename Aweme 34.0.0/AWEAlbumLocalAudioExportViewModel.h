@interface AWEAlbumLocalAudioExportViewModel : AWEAlbumBaseViewModel
@property (nonatomic) CAKAlbumAssetModel currentPreviewAsset;
@property (nonatomic) AWELocalAudioExportAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> bottomView;
@property (nonatomic) AWELocalAudioExportAlbumPreviewBottomView<CAKAlbumPreviewPageBottomViewProtocol> bottomViewInPreview;
- (id)initWithInputData:;
- (double)heightForBottomView;
- (id)currentPreviewAsset;
- (void)updateSelectedAssets:;
- (void)goToNextWithMultiSelect:;
- (void)setCurrentPreviewAsset:;
- (double)heightForPreviewBottomView;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (BOOL)shouldSelectAlbumAsset:;
- (void)trackPreviewControllerDidLoadForAlbumAsset:;
- (void)trackPreviewControllerScrollViewDidEndDeceleratingWithAlbumAsset:;
- (void)updateBottomNextButtonWithButton:fromPreview:;
- (id)bottomViewInPreview;
- (BOOL)validateAssetDuration:;
- (double)p_convertVideoDuration:;
- (void)setBottomViewInPreview:;
- (void).cxx_destruct;
- (id)bottomView;
- (void)setBottomView:;
@end
