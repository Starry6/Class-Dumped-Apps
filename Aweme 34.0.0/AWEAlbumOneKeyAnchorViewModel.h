@interface AWEAlbumOneKeyAnchorViewModel : AWEAlbumBaseViewModel
@property (nonatomic) ACCOneKeyMvEntranceAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> bottomView;
@property (nonatomic) AWEAlbumMVCutSameViewModel cutSameViewModel;
@property (nonatomic) AWECutSameTipView tipView;
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingView;
@property (nonatomic) AWEMVDetailResponseModel mvDetail;
- (void)albumViewControllerDidLoad:;
- (id)initWithInputData:;
- (void)setCutSameViewModel:;
- (id)cutSameViewModel;
- (void)updateSelectedAssets:;
- (BOOL)shouldSelectAlbumAsset:;
- (BOOL)validAssetModelForVideo:;
- (void)loadTemplateDetail;
- (void)switchToCutSame:;
- (id)mvDetail;
- (void)setMvDetail:;
- (void)setTipView:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)bottomView;
- (id)footerTitle;
- (void)setBottomView:;
- (id)bottomButton;
- (id)tipView;
@end
