@interface CSJExpressRewardFullScreenVM : NSObject
@property (nonatomic) BOOL isPlayableShowed;
@property (nonatomic) BOOL isInteractived;
@property (nonatomic) CSJRewardBrowseAlertView rewardBrowseEcomAlert;
@property (nonatomic) BUTimer playableStayDurationTimer;
@property (nonatomic) double playableDuration;
@property (nonatomic) double continuePlayProgress;
@property (nonatomic) CSJRewardedRetainAlertManager alertManger;
@property (nonatomic) BOOL didSentShowEvent;
@property (nonatomic) CSJPlayableVideoController miniVideoPlayerController;
@property (nonatomic) CSJWebViewController landingPageWebVC;
@property (nonatomic) CSJCountDownTipsView tipsView;
@property (nonatomic) BOOL didShowMiniPlayerTips;
@property (nonatomic) <CSJNativeExpressVideoAdDelegate> rewardedVideoAd;
@property (nonatomic) BOOL isRewardedVideo;
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) @? purePlayableClickBlock;
@property (nonatomic) CSJNativeExpressRewardedVideoAdView expressAdView;
@property (nonatomic) NSArray expressAdViews;
@property (nonatomic) UIViewController currentViewController;
@property (nonatomic) CSJNativeExpressRewardedVideoAdDisplayViewController rewardedVideoDisplayViewController;
@property (nonatomic) CSJRewardedVideoWebViewController endcardWebVC;
@property (nonatomic) CSJPlayableLandingViewController playableLandingVC;
@property (nonatomic) CSJUgenAggregationViewController ugenAggregationVC;
@property (nonatomic) Q systemOrientation;
@property (nonatomic) Q videoOrientation;
@property (nonatomic) Q childTransform;
@property (nonatomic) NSString startTimestamp;
@property (nonatomic) NSString endTimestamp;
@property (nonatomic) CSJNativeAd purePlayableNativeAd;
@property (nonatomic) CSJURitSettingModel ritModel;
@property (nonatomic) CSJPurePlayableLoadingViewController loadingWebView;
@property (nonatomic) UILabel leftSeconds;
@property (nonatomic) BUTimer leftTimer;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton dislikeButton;
@property (nonatomic) UIButton backBtn;
@property (nonatomic) UIButton feedbackBtn;
@property (nonatomic) UIButton silentButton;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isReportEvent;
@property (nonatomic) BOOL purePlayableSendRewardFromH5;
@property (nonatomic) BOOL couldSendRewardForPurePlayable;
@property (nonatomic) BOOL isShowAlertView;
@property (nonatomic) BOOL hadSwitchToWebviewVC;
@property (nonatomic) NSArray relatedMaterialMetas;
@property (nonatomic) CSJDislikeContext dislikeContext;
@property (nonatomic) q closeButtonStyle;
@property (nonatomic) q leftTime;
@property (nonatomic) q closeTime;
@property (nonatomic) BOOL playableRenderFailed;
@property (nonatomic) CSJNativeExpressRewardedVideoAdViewController rootVC;
@property (nonatomic) @? refreshAdShowBlock;
@property (nonatomic) CSJRewardedVideoWebViewController currentWebVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backBtn;
- (BOOL)isShowAlertView;
- (void)preloadPlayable;
- (void)setFeedbackBtn:;
- (void)setLeftSeconds:;
- (void)showRewardAgainEntranceTipsView;
- (void)switchToEndcard;
- (void)_startPlayableStayDurationTimer;
- (BOOL)isRewardedVideo;
- (id)rewardedVideoAd;
- (void)setAlertManger:;
- (void)showAutoSwitchToMiniPlayerTips:;
- (void)vmViewDidAppear;
- (void)_addAdvancedRewardType:;
- (void)_didBecomeActiveNotification;
- (void)_didReceiveTrackerSentNotification:;
- (long long)_getRewardLeftTimeDirectLandingPage;
- (long long)_getRewardRemainTime;
- (void)_sendRewardButtonStatus;
- (void)_startPlayableStayDurationTimerFire;
- (void)_stopPlayableStayDurationTimer;
- (void)_updateRewardWithType:propose:;
- (void)_willResignActiveNotification;
- (id)adSlot;
- (id)alertManger;
- (void)bu_webviewLoadFinish:;
- (void)checkSKOverlay;
- (void)checkShouldShowMiniPlayer;
- (unsigned long long)childTransform;
- (long long)closeButtonStyle;
- (void)closeRewardBrowseTimeout;
- (long long)closeTime;
- (void)confirmCloseWindow;
- (void)contextWillGoDetailPage:;
- (double)continuePlayProgress;
- (BOOL)couldSendRewardForPurePlayable;
- (double)currentAudioProgress;
- (long long)currentVideoProgress;
- (id)currentWebVC;
- (void)didCloseAlertView:;
- (BOOL)didSentShowEvent;
- (void)didShowAlertView;
- (BOOL)didShowMiniPlayerTips;
- (id)dislikeButton;
- (void)dislikeButtonTapped:;
- (id)dislikeContext;
- (void)dismissCurrentViewControllerIsSkip:;
- (id)endcardWebVC;
- (id)expressAdView;
- (id)expressAdViews;
- (id)feedbackBtn;
- (long long)getCloseTimeValue;
- (id)getRewardFullscreenMaterial;
- (long long)getRewardPlayTime;
- (id)getTrackTag;
- (BOOL)hadSwitchToWebviewVC;
- (void)handleEcommerceBrowseTopBar;
- (void)handlePurePlayableBar:;
- (id)initViewModelWithExpressAdView:expressAdViews:nativeAd:rootViewController:;
- (BOOL)isInteractived;
- (BOOL)isPlayableShowed;
- (BOOL)isReportEvent;
- (BOOL)isShowMiniPlayerLandingPage;
- (BOOL)isShowingRewardBrowseEcomAlert;
- (void)judgeDirection;
- (id)landingPageWebVC;
- (void)layoutEcommerceBrowseTopBar;
- (void)layoutIntersitialStyle;
- (id)leftSeconds;
- (long long)leftTime;
- (id)leftTimer;
- (id)loadingWebView;
- (id)miniVideoPlayerController;
- (id)nativeExpressInteractiveFinished:;
- (void)nativeExpressRewardedPlayAgain;
- (void)nativeExpressRewardedVideoDidPlayFinish:error:;
- (void)nativeExpressRewardedVideoDidPlayRewardTime:;
- (void)nativeExpressRewardedVideoDidStartPlay;
- (void)nativeExpressRewardedVideoPushPlayableLandingPage;
- (id)playableLandingVC;
- (void)playableRenderFaild:;
- (BOOL)playableRenderFailed;
- (double)playableStayDuration;
- (id)playableStayDurationTimer;
- (void)player:second:;
- (id)purePlayableClickBlock;
- (id)purePlayableNativeAd;
- (void)purePlayableRemoveLoadingByJSB;
- (BOOL)purePlayableSendRewardFromH5;
- (void)purePlayableSendRewardFromH5Callback;
- (void)purePlayableSwitchToWebViewMute:;
- (id)refreshAdShowBlock;
- (id)relatedMaterialMetas;
- (void)relayoutSubViews;
- (id)rewardBrowseEcomAlert;
- (void)rewardRetainCancleActionWithContext:;
- (void)rewardRetainConfirmActionWithContext:alertConfig:;
- (void)rewardedVideoAdClose;
- (id)rewardedVideoDisplayViewController;
- (void)rewardedVideoH5AdDidClickNeedJump:;
- (void)rewardedVideoInteractiveSkip:;
- (void)rewardedVideoWebViewControllerBackVideo:;
- (void)rewardedVideoWebViewControllerClick:clickInfo:;
- (void)rewardedVideoWebViewControllerCloseClick:;
- (void)rewardedVideoWebViewControllerDislikeClick:;
- (void)rewardedVideoWebViewControllerJumpEndcard:;
- (void)rewardedVideoWebViewControllerOpenUrlWithParams:;
- (void)rewardedVideoWebViewControllerSkipClick:;
- (void)rewardedVideoWebViewControllerVolumeChange:isMute:;
- (id)ritModel;
- (id)rootVC;
- (void)safeDelegate_didCloseOtherControllerWithExpressView:interactionType:;
- (void)safeDelegate_videoAdDidClickSkip;
- (void)sendPlayableReward;
- (void)sendVerifiedRewardWithDuration:type:;
- (void)setAdSlot:;
- (void)setBackBtn:;
- (void)setChildTransform:;
- (void)setCloseButtonStyle:;
- (void)setCloseTime:;
- (void)setContinuePlayProgress:;
- (void)setCouldSendRewardForPurePlayable:;
- (void)setCurrentVideoProgress:;
- (void)setDidSentShowEvent:;
- (void)setDidShowMiniPlayerTips:;
- (void)setDislikeButton:;
- (void)setDislikeContext:;
- (void)setEndcardWebVC:;
- (void)setExpressAdView:;
- (void)setExpressAdViews:;
- (void)setHadSwitchToWebviewVC:;
- (void)setIsInteractived:;
- (void)setIsPlayableShowed:;
- (void)setIsReportEvent:;
- (void)setIsRewardedVideo:;
- (void)setIsShowAlertView:;
- (void)setLandingPageWebVC:;
- (void)setLeftTime:;
- (void)setLeftTimer:;
- (void)setLoadingWebView:;
- (void)setMiniPlayerState:;
- (void)setMiniVideoPlayerController:;
- (void)setPlayableLandingVC:;
- (void)setPlayableRenderFailed:;
- (void)setPlayableStayDurationTimer:;
- (void)setPurePlayableClickBlock:;
- (void)setPurePlayableNativeAd:;
- (void)setPurePlayableSendRewardFromH5:;
- (void)setRefreshAdShowBlock:;
- (void)setRelatedMaterialMetas:;
- (void)setRewardBrowseEcomAlert:;
- (void)setRewardedVideoAd:;
- (void)setRewardedVideoDisplayViewController:;
- (void)setRitModel:;
- (void)setRootVC:;
- (void)setSilentButton:;
- (void)setSystemOrientation:;
- (void)setTipsView:;
- (void)setUgenAggregationVC:;
- (void)setupUIForMiniPlayer;
- (BOOL)shouldBlockReward;
- (void)showDislikeFeedback;
- (void)showMiniPlayer;
- (void)showRewardBrowseEcomAlert:;
- (id)silentButton;
- (void)silentButtonTapped:;
- (void)switchToLandingPageWithMiniPlayer;
- (void)switchToPlayable;
- (void)switchToWebViewController:;
- (void)switchToWebViewMute:;
- (unsigned long long)systemOrientation;
- (id)tipsView;
- (id)ugenAggregationVC;
- (void)updateNativeTitleBar:;
- (void)updateSizeWithButton:;
- (void)updateSizeWithLabel:;
- (void)updateSlientBtnState:;
- (void)updateTopBarButtonFrame;
- (void)updateTopBarDislikeButtonFrame;
- (void)verifyRewardWithDurationTime:type:success:fail:;
- (void)vmLoadData;
- (unsigned long long)vmSupportedInterfaceOrientations;
- (void)vmViewDidDisappear;
- (BOOL)mute;
- (id)endTimestamp;
- (void)dealloc;
- (unsigned long long)videoOrientation;
- (id)startTimestamp;
- (void)setEndTimestamp:;
- (void)setVideoOrientation:;
- (void)setMute:;
- (void)setStartTimestamp:;
- (void).cxx_destruct;
- (void)closeButtonTapped:;
- (id)closeButton;
- (void)setCloseButton:;
- (void)setCurrentViewController:;
- (id)currentViewController;
- (double)playableDuration;
- (void)openAppStore;
- (void)setPlayableDuration:;
+ (id)createViewModelWithExpressAdView:expressAdViews:nativeAd:rootViewController:;
@end
