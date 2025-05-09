@interface AWEAwesomeSplashFeedCell : UITableViewCell
@property (nonatomic) AWEFeedCellViewController viewController;
@property (nonatomic) UIView<AWECommerceSplashStyleViewProtocol> splashStyleView;
@property (nonatomic) NSTimer requestTimer;
@property (nonatomic) NSTimer effectTimer;
@property (nonatomic) BOOL shouldRequestTopliveInfo;
@property (nonatomic) BOOL hasEnteredLiveRoom;
@property (nonatomic) BOOL shouldRestartEffect;
@property (nonatomic) UIView moduleView;
@property (nonatomic) BDASplashBackgroundView splashBGView;
@property (nonatomic) TTVideoEngine bgVideoEngine;
@property (nonatomic) UIView ttBGPlayerView;
@property (nonatomic) UIView videoMaskView;
@property (nonatomic) BOOL previousHidden;
@property (nonatomic) BOOL previousUnderHidden;
@property (nonatomic) BOOL shouldKeepPureMode;
@property (nonatomic) @? keepPureModeHandler;
@property (nonatomic) BOOL hasObservedFrame;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q indexPath;
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel registerElementModel;
@property (nonatomic) q cellDisplayState;
@property (nonatomic) q cellPageAppearState;
@property (nonatomic) @? currentCellPageAppearStateBlock;
@property (nonatomic) ^{EngineAudioWrapper=^?^?^?^?^v} audioWrapper;
@property (nonatomic) ^{EngineVideoWrapper=^?^?^v} videoWrapper;
@property (nonatomic) UIView feedTableViewCellMaskView;
@property (nonatomic) <UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
- (id)referString;
- (void)setReferString:;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:;
- (id)audioWrapper;
- (void)setAudioWrapper:;
- (id)videoWrapper;
- (void)setVideoWrapper:;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)hasEnteredLiveRoom;
- (id)registerElementModel;
- (void)setRegisterElementModel:;
- (BOOL)isViewerListShowing;
- (void)configWithModel:;
- (id)getSuitableVideoModel:;
- (void)p_prepareForDisplay;
- (void)liveDidEnd:;
- (void)liveDidEnter;
- (long long)cellDisplayState;
- (void)setCellDisplayState:;
- (long long)cellPageAppearState;
- (void)setCellPageAppearState:;
- (id)currentCellPageAppearStateBlock;
- (void)setCurrentCellPageAppearStateBlock:;
- (void)resetRefreshFlag;
- (void)onAppDidEnterBackground:;
- (id)adLynxCardManager;
- (id)createCubicBezierAnimationWith:duration:timingFunction:;
- (void)sendJSEvent:param:;
- (id)getLynxLearnMoreViewFrame;
- (id)getNativeLearnMoreViewFrame;
- (id)getLokiComponentFrame;
- (id)getLynxCardViewFrame;
- (void)storeLastClickPoint:;
- (void)trackInvalidClick:;
- (void)openLandingPageIfNeeded:animationType:;
- (void)trackEventWithLabel:extra:adExtra:;
- (void)recoverAfterEggTransition;
- (void)onSkipButtonClick;
- (void)swipeSkipSplash;
- (void)onBackgroundViewTapped:;
- (id)getContainerView;
- (void)trackShowFailedWithReason:;
- (id)targetAnimationView;
- (id)originLokiContainerViewFrame;
- (void)onTransitionEggClicked:adExtra:;
- (void)onTransitionAnimationFinished:isSuccess:;
- (void)sendLog:extra:adExtra:isAdEvent:;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)setupSplashStyleViewWithModel:;
- (id)splashStyleView;
- (void)setSplashStyleView:;
- (void)trackComplianceAdClickWithParam:;
- (void)setupAppearence;
- (void)hideSplashStyleView;
- (void)showWIFIAlertIfNeeded;
- (void)cellWillDisappear:;
- (void)cellDidAppear:;
- (void)setupBGSplashViewIfNeededWithModel:;
- (void)addLynxButtonExtraInfoIfNeeded:;
- (void)setupHotSplashAppearenceIfNeededWithModel:;
- (void)updateSplashBGViewIfNeeded;
- (void)setupKeepPureModelHandler;
- (id)splashBGView;
- (void)updateSplashBGViewTTPlayerExtraView;
- (void)requestTopviewLiveInfoIfNeeded:context:;
- (id)bgVideoEngine;
- (BOOL)shouldRestartEffect;
- (void)setShouldRestartEffect:;
- (void)start3DShakeEffect;
- (void)sendLokiJSEvent:param:;
- (void)splashWillDisappear;
- (void)setPreviousHidden:;
- (void)setPreviousUnderHidden:;
- (void)startVideo3DFlipAnimation;
- (void)lynxCardViewStartAnimation;
- (id)moduleView;
- (void)startModuleStyleViewDisappearAnimationWithDuration:;
- (void)startVideoTransitionAnimation;
- (BOOL)isDoubleVideoStyle;
- (BOOL)shouldKeepPureMode;
- (void)setSplashBGView:;
- (BOOL)previousHidden;
- (BOOL)previousUnderHidden;
- (void)setShouldRequestTopliveInfo:;
- (void)beginPeriodicRequestTopViewLiveInfo;
- (void)setHasEnteredLiveRoom:;
- (void)setShouldKeepPureMode:;
- (void)setVideoMaskView:;
- (void)setBgVideoEngine:;
- (id)ttBGPlayerView;
- (void)setTtBGPlayerView:;
- (BOOL)shouldRequestTopliveInfo;
- (void)setupModuleSplashViewIfNeededWithModel:;
- (BOOL)shouldDoubleVideoUseTTExtraView;
- (void)updateDoubleVideoView;
- (void)update3DFlipVideoView;
- (void)setHasObservedFrame:;
- (void)setModuleView:;
- (id)videoMaskView;
- (void)onSplashScreenClicked;
- (BOOL)isFlipVideoStyle;
- (id)keepPureModeHandler;
- (void)setKeepPureModeHandler:;
- (BOOL)hasObservedFrame;
- (id)scrollViewDelegate;
- (void)dealloc;
- (void)play;
- (long long)indexPath;
- (void)prepareForDisplay;
- (id)viewController;
- (void)setIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (double)currentPlaybackTime;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)setViewController:;
- (id)currentModel;
- (void)configureWithModel:;
- (id)requestTimer;
- (void)setRequestTimer:;
- (void)didEndDisplaying;
- (void)setCurrentModel:;
- (void)willDisplay;
- (void)setEffectTimer:;
- (id)effectTimer;
- (id)parentVC;
- (void)setParentVC:;
@end
