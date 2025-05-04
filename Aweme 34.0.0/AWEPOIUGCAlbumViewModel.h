@interface AWEPOIUGCAlbumViewModel : AWEAlbumBaseViewModel
@property (nonatomic) NSDate startNextTime;
@property (nonatomic) BOOL dismissed;
- (void)p_dismissSelf:;
- (void)goToNextWithMultiSelect:;
- (void)fetchSlidesCoverWithAssetModels:workspace:withResultBlock:;
- (void)setStartNextTime:;
- (id)startNextTime;
- (void)__finishSelectedWithAssets:publishModel:;
- (void)__openEditorWithAssets:publishModel:;
- (void)__finishInfiniSelectedWithAssets:publishModel:;
- (void)uploadImageWithPublishModel:;
- (void)trackEnterEditFromAlbum;
- (void)trackTransferStatus:;
- (id)rootPresentingViewController:;
- (void)__openInfiniEditorWithAssets:publishModel:;
- (void)__finishOldSelectedWithAssets:publishModel:;
- (void)__openOldEditorWithAssets:publishModel:;
- (BOOL)dismissed;
- (void)setDismissed:;
- (void).cxx_destruct;
@end
