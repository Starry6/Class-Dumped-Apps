@interface AWEIMAwemeMediaDisplayViewController_Exchange : AWEIMAwemeMediaDisplayViewController
@property (nonatomic) AWEIMPhotoBrowserZoomableView currentImageView;
@property (nonatomic) UIView playerInteractionView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) <IESVideoPlayerProtocol> playerController;
@property (nonatomic) AWEIMPlayVideoAnimationPauseIcon playStatusIconImageView;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) BOOL pausedByResignFirstResponder;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL shouldAutoPlay;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIView iconBackgroudView;
@property (nonatomic) UILabel noticeLabel;
@property (nonatomic) UILabel replayNoticeLabel;
@property (nonatomic) UIButton replayButton;
@property (nonatomic) UIButton replayNoticeButton;
@property (nonatomic) AWEIMLocationAnchorView locationAnchorView;
@property (nonatomic) AWEIMAwemeMediaDisplayMaskView groupMaskContentView;
@property (nonatomic) BOOL hasSavedVideoFromLibraryFaildBefore;
@property (nonatomic) AWEIMMessageBaseViewController baseVC;
@property (nonatomic) UIImage currentImage;
@property (nonatomic) UIImage mosaicImage;
@property (nonatomic) UIImage resultImage;
@property (nonatomic) AWEIMAwemeMediaDisplayExchangeViewModel viewModel;
@property (nonatomic) BOOL isExchangeImageFinish;
@property (nonatomic) BOOL didFinishExchangeAnimation;
@property (nonatomic) BOOL needExchangeAnimation;
@property (nonatomic) BOOL isShowingPlayer;
@property (nonatomic) BOOL isExchangeAnimating;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeModel:;
- (void)player:playbackFailedWithError:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)player:didChangeStallState:;
- (void)playerWillLoopPlaying:;
- (void)didEndDecelerating:;
- (void)cellDidEndDisplay:;
- (id)transitionEndView;
- (void)onPressDownLoad;
- (BOOL)longPressModuleViewEnable;
- (void)setHasPlayed:;
- (void)p_play;
- (void)p_addObserver;
- (void)p_setupGesture;
- (void)p_setupLayout;
- (id)playerInteractionView;
- (void)setPlayerInteractionView:;
- (id)mosaicImage;
- (id)locationAnchorView;
- (void)setLocationAnchorView:;
- (BOOL)doubleTapLikeEnabled;
- (void)setIsExchangeImageFinish:;
- (void)setBaseVC:;
- (id)baseVC;
- (void)didUpdateBatchInfoList:batchIDs:source:;
- (void)p_updateCurrentImageView;
- (id)exchangeMessage;
- (void)p_resetViewModelWithMessage:;
- (BOOL)p_isNeedShowExchangeAnimate;
- (void)setShouldAutoPlay:;
- (void)p_setPublishImageIfNeed;
- (void)p_doExchangeImageAnimationIfNeed;
- (void)p_setImageWithCurrentMessage;
- (void)p_configTitleTextWithCurrentMessage;
- (void)p_configPlayerWithCurrentMessage;
- (void)p_setupAvatar;
- (void)p_configLocatinViewWithMessage:;
- (id)groupMaskContentView;
- (void)p_routerToCamera:;
- (BOOL)p_shouldAddLongPressGesture;
- (BOOL)isShowingPlayer;
- (void)p_checkAutoPlay;
- (id)replayNoticeButton;
- (id)replayNoticeLabel;
- (id)playStatusIconImageView;
- (void)showInteractiveUI;
- (void)hideInteractiveUI;
- (void)p_pauseByResignFirstResponder;
- (void)p_continueByResignFirstResponder;
- (void)setPausedByResignFirstResponder:;
- (BOOL)pausedByResignFirstResponder;
- (BOOL)p_isWaitingExchange;
- (id)iconBackgroudView;
- (BOOL)p_enableShowExchangeAgainUI;
- (BOOL)didFinishExchangeAnimation;
- (void)setNeedExchangeAnimation:;
- (void)p_updateImageViewLayout:;
- (void)p_hidePlayer;
- (void)setCurrentDisplayImage:;
- (void)setMosaicImage:;
- (void)setResultImage:;
- (BOOL)isExchangeAnimating;
- (void)p_traceExchangeImageAnimationShow;
- (void)setIsExchangeAnimating:;
- (void)p_doRotationAnimationWithIndex:exchangeMessage:;
- (BOOL)isExchangeImageFinish;
- (void)p_doCrossDissolveAnimationWithImage:exchangeMessage:;
- (void)p_doExChangeImageAnimationWithIndex:completion:;
- (void)setDidFinishExchangeAnimation:;
- (void)p_reloadWithMessage:;
- (BOOL)needExchangeAnimation;
- (BOOL)p_canShowContent;
- (void)p_showPlayer;
- (void)setIsShowingPlayer:;
- (void)p_configPlayerController;
- (void)p_pauseIfNeeded;
- (void)onViewDidTapped;
- (void)didTapZoomableImageView:;
- (void)p_configPlayerControllerWithVideoURLString:resetDecryptionKey:;
- (void)p_loadVideoFailed;
- (void)onReplayButtonTap;
- (void)onExchangeAgainButtonTap;
- (void)onExchangeMessageUpdated:;
- (void)setPlayStatusIconImageView:;
- (void)setIconBackgroudView:;
- (void)setReplayNoticeLabel:;
- (void)setReplayNoticeButton:;
- (void)setGroupMaskContentView:;
- (BOOL)hasSavedVideoFromLibraryFaildBefore;
- (void)setHasSavedVideoFromLibraryFaildBefore:;
- (void)applicationWillResignActive:;
- (id)currentImageView;
- (void)applicationDidBecomeActive:;
- (id)init;
- (void)dealloc;
- (void)play;
- (BOOL)isOnScreen;
- (void)setPlayerController:;
- (void)setLoadingView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)iconView;
- (id)loadingView;
- (id)playerController;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)currentImage;
- (id)titleLabel;
- (void)setIsOnScreen:;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setupView;
- (BOOL)shouldAutoPlay;
- (void)setCurrentImage:;
- (id)resultImage;
- (BOOL)hasPlayed;
- (void)setCurrentImageView:;
- (id)replayButton;
- (void)setReplayButton:;
- (void)setNoticeLabel:;
- (id)noticeLabel;
@end
