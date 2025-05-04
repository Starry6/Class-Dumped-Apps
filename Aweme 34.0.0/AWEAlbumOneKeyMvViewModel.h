@interface AWEAlbumOneKeyMvViewModel : AWEAlbumBaseViewModel
@property (nonatomic) ACCOneKeyMvEntranceAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> bottomView;
@property (nonatomic) AWECutSameTipView tipView;
- (id)initWithInputData:;
- (BOOL)shouldSelectAlbumAsset:;
- (BOOL)validAssetModelForVideo:;
- (void)setTipView:;
- (void).cxx_destruct;
- (id)bottomView;
- (id)footerTitle;
- (void)setBottomView:;
- (id)tipView;
@end
