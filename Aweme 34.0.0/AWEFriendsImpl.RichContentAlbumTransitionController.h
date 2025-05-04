@interface AWEFriendsImpl.RichContentAlbumTransitionController : AWEBaseController
@property (nonatomic) <AWEVideoInteractiveProtocol> currentCellStickerManager;
- (void)setPauseHidden:;
- (id)richContentContainer;
- (void)albumDetailPinchInTransitionWillBegin;
- (void)albumDetailPinchInTransitionDidCancel;
- (void)albumDetailPinchInTransitionDidEnd;
- (void)albumDetailSinkingTransitionDidCancel;
- (void)updateAudioPlayWithPlayVideoVC:;
- (void)albumDetailSinkingTransitionDidEnd;
- (void)albumDetailDidBack;
- (void)albumDetailSinkingTransitionWillBegin;
- (void)albumDetailTransitionDidEnd;
- (void)albumDetailTransitionWillBegin;
- (void)onAlbumPanelTransitionWillBegin:;
- (void)onAlbumPanelTransitionDidEnd:success:;
- (void)syncAudioController:;
- (id)currentCellStickerManager;
- (void)showADRichAwemeFullPageWithCurrentIndex:;
- (void)dismissRichAwemeDetail;
- (id)outerAlbumContainer;
- (id)interactionViewSnapShot;
- (void)showFullPageFeedWithPriorityType:commentIDs:highlightID:commentExtraParams:currentIndex:logExtra:;
- (id)init;
- (void).cxx_destruct;
- (id)progressBarView;
@end
