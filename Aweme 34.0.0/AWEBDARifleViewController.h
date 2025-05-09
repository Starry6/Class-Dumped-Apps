@interface AWEBDARifleViewController : UIViewController
@property (nonatomic) NSDictionary urlParams;
@property (nonatomic) q isDynamic;
@property (nonatomic) BOOL immersiveMode;
@property (nonatomic) BOOL hideNaviBar;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) UIView<AWEUILoadingViewProtocol> loadingView;
@property (nonatomic) BOOL hideStatusBar;
@property (nonatomic) BOOL hideLoading;
@property (nonatomic) NSString cardID;
@property (nonatomic) NSString group;
@property (nonatomic) NSString fallbackURL;
@property (nonatomic) BOOL forceH5;
@property (nonatomic) NSString lynxTitle;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) UIColor topBarColor;
@property (nonatomic) UIColor navigationBarColor;
@property (nonatomic) UIColor statusBarColor;
@property (nonatomic) UIColor containerBackgroundColor;
@property (nonatomic) BOOL forceDarkStyle;
@property (nonatomic) BOOL disablePopGesture;
@property (nonatomic) NSNumber currentLynxStatusBarStyleType;
@property (nonatomic) BOOL enableFontScale;
@property (nonatomic) BOOL disablePadResize;
@property (nonatomic) double startTime;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) BUPlayableAd playableSDK;
@property (nonatomic) BOOL surveyPopFlag;
@property (nonatomic) q userViewTimeLimit;
@property (nonatomic) NSTimer surveyTimer;
@property (nonatomic) UIView<AWEAdLynxCoverLandingPageView> lynxCoverLandingPageContainer;
@property (nonatomic) NSObject<AWEAdInteractiveLandingpageManager> interactiveCardManager;
@property (nonatomic) BOOL disableStayTrack;
@property (nonatomic) BOOL needUpdateScreenSize;
@property (nonatomic) NSObject<AWECommerceQponLandingManager> couponStyleManager;
@property (nonatomic) UIView adHalfPageNavigationView;
@property (nonatomic) NSObject<AWEAdLandPageMannorCardManager> mannorCardManager;
@property (nonatomic) UIView mannorView;
@property (nonatomic) double adLpOpenTime;
@property (nonatomic) BDUGFlowAuthToken positionToken;
@property (nonatomic) BDUGFlowAuthToken jumpToken;
@property (nonatomic) AWEBDARifleView bdaRifleView;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isPadSplitting;
@property (nonatomic) q splitViewScene;
@property (nonatomic) AWEPadSplitPageContext splitViewContext;
@property (nonatomic) <AWEPadSplitViewService> splitService;
@property (nonatomic) <AWEPadSplitViewBizAdapter> splitViewAdapter;
@property (nonatomic) <AWEBDARifleViewControllerLifeCycleProtocol> lifecycleDelegate;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString bundleName;
@property (nonatomic) BOOL isPlayable;
@property (nonatomic) NSString schema;
@property (nonatomic) q tipsType;
@property (nonatomic) BOOL canShowLynxOverLandingPageView;
@property (nonatomic) BOOL shouldFullScreen;
@property (nonatomic) BOOL fallBackedToH5;
@property (nonatomic) BOOL forceHiddenNavBar;
@property (nonatomic) NSDictionary initialParams;
@property (nonatomic) BOOL isAdLandingPage;
@property (nonatomic) UIScrollView adHalfPageScrollView;
@property (nonatomic) AWEAdWebViewController fallBackWebview;
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) BOOL usePresentTransition;
- (void)setCloseBlock:;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setLogExtra:;
- (id)logExtra;
- (void)setCreativeID:;
- (void)setIsPadSplitting:;
- (void)backButtonClicked;
- (id)closeBlock;
- (long long)tipsType;
- (BOOL)isPadSplitting;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:;
- (id)bdaRifleView;
- (void)setTipsType:;
- (BOOL)canShowLynxOverLandingPageView;
- (void)setCanShowLynxOverLandingPageView:;
- (BOOL)shouldFullScreen;
- (void)setShouldFullScreen:;
- (BOOL)fallBackedToH5;
- (void)setFallBackedToH5:;
- (BOOL)forceHiddenNavBar;
- (void)setForceHiddenNavBar:;
- (id)initialParams;
- (void)setInitialParams:;
- (BOOL)isAdLandingPage;
- (void)setIsAdLandingPage:;
- (id)adHalfPageScrollView;
- (void)setAdHalfPageScrollView:;
- (id)fallBackWebview;
- (void)setFallBackWebview:;
- (id)globalProps;
- (void)setGlobalProps:;
- (BOOL)usePresentTransition;
- (void)setUsePresentTransition:;
- (void)updateScreenMetrics;
- (id)clickButtonHandle;
- (void)setClickButtonHandle:;
- (BOOL)commentViewControllerIsShow;
- (void)setCommentViewControllerIsShow:;
- (id)bottomNotification;
- (void)setBottomNotification:;
- (id)showBottomNotificationTask;
- (void)setShowBottomNotificationTask:;
- (BOOL)isHalfPage;
- (void)setIsHalfPage:;
- (double)adHalfPageNavigationHeight;
- (id)adHalfPageNavigationView;
- (void)adHalfPageWillDismiss;
- (void)adHalfPageChangeStatus:;
- (id)adHalfPageCardView;
- (id)adHalfPagePopTexts;
- (void)playableAd:registerHandlerBlock:forJSMethod:;
- (void)playableAd:fireEvent:params:;
- (void)playableEventReportNotification:;
- (id)templateData;
- (BOOL)hideLoading;
- (id)statusBarColor;
- (void)setStatusBarColor:;
- (id)urlParams;
- (void)setUrlParams:;
- (BOOL)forceH5;
- (void)setForceH5:;
- (void)setShowLoading:;
- (void)setHideNavBar:;
- (BOOL)enableFontScale;
- (void)setEnableFontScale:;
- (BOOL)hideNavBar;
- (BOOL)immersiveMode;
- (void)setImmersiveMode:;
- (BOOL)forceDarkStyle;
- (void)setupTopBarColor;
- (void)setupGesture;
- (void)updateStartTime;
- (void)setForceDarkStyle:;
- (void)showTopStatusBar;
- (void)hideTopStatusBar;
- (void)reportButtonClicked;
- (void)rifleViewDidStartLoading:;
- (void)rifleViewvDidFirstScreen:;
- (void)rifleView:didFinishLoadWithURL:;
- (void)rifleView:didLoadFailedWithURL:error:;
- (void)rifleView:didRecieveError:;
- (id)lynxBridges;
- (id)playableSDK;
- (void)setPlayableSDK:;
- (void)setBdaRifleView:;
- (void)trackStayTime;
- (void)setNeedUpdateScreenSize:;
- (void)setAdLpOpenTime:;
- (void)setHideNaviBar:;
- (void)configWithRouterParamDictHelper:;
- (void)setLynxTitle:;
- (void)setTopBarColor:;
- (void)setNavigationBarColor:;
- (void)setHideLoading:;
- (void)setDisablePopGesture:;
- (void)setCurrentLynxStatusBarStyleType:;
- (void)setDisableStayTrack:;
- (void)setDisablePadResize:;
- (BOOL)disableStayTrack;
- (id)lynxTitle;
- (BOOL)shouldResizeForIpad;
- (void)setupImmersiveNavigationBarLayout;
- (void)setupNormalNavigationBarLayout;
- (void)forceHiddenFENavigationBar;
- (void)onRightCommentButtonClicked;
- (void)onRightSurveyButtonClicked;
- (id)topBarColor;
- (BOOL)hideNaviBar;
- (double)lynxViewTopPadding;
- (id)currentLynxStatusBarStyleType;
- (id)splitService;
- (void)setMannorCardManager:;
- (id)mannorCardManager;
- (void)setMannorView:;
- (id)mannorView;
- (void)setupSurveryAlertViewIfNeeded;
- (void)notifyViewWillAppear;
- (BOOL)disablePopGesture;
- (id)jumpToken;
- (id)positionToken;
- (void)setJumpToken:;
- (void)setPositionToken:;
- (void)recoverSlideSlip;
- (void)notifyViewDidDisappear;
- (BOOL)needUpdateScreenSize;
- (void)setupPlayableEventNotification;
- (void)removePlayableEventNotification;
- (id)couponStyleManager;
- (void)configWithCommentData;
- (void)setupPlayable;
- (void)loadLynx;
- (void)setupPlayableJSB;
- (void)setupLynxCoverLandingPageContainer;
- (void)setupInteractiveCard;
- (void)setupMannorCardManager;
- (void)setupGuaranteeBannerIfNeeded;
- (double)resizeWidthForIpad;
- (id)padSplitLynxBridges;
- (id)halfPageLynxBridges;
- (double)adLpOpenTime;
- (BOOL)shouldShowPopView;
- (void)showSurveyAlertView;
- (void)setupCouponStyleIfNeeded;
- (BOOL)blockClose;
- (void)closeLynxAction;
- (void)setSurveyPopFlag:;
- (void)setUserViewTimeLimit:;
- (long long)userViewTimeLimit;
- (void)disableSlideSlip;
- (void)setSurveyTimer:;
- (id)surveyTimer;
- (BOOL)surveyPopFlag;
- (void)showLynxSurveyWithEnterMethod:;
- (BOOL)hasFetchTemplateData;
- (void)setLynxCoverLandingPageContainer:;
- (void)setInteractiveCardManager:;
- (id)interactiveCardManager;
- (id)lynxCoverLandingPageContainer;
- (id)findScrollView:;
- (void)updateLynxViewLayout;
- (BOOL)disablePadResize;
- (void)setCouponStyleManager:;
- (long long)splitViewScene;
- (id)splitViewContext;
- (void)setSplitViewContext:;
- (void)setSplitService:;
- (id)splitViewAdapter;
- (void)setSplitViewAdapter:;
- (void)reloadLynx;
- (void)setAdHalfPageNavigationView:;
- (void)handlePan:;
- (id)schema;
- (void)setModel:;
- (BOOL)prefersStatusBarHidden;
- (id)topViewController;
- (void)viewWillDisappear:;
- (void)setIsDynamic:;
- (long long)isDynamic;
- (id)titleColor;
- (BOOL)isPlayable;
- (id)init;
- (void)setIsPlayable:;
- (void)dealloc;
- (id)bundleName;
- (void)setSchema:;
- (void)setStartTime:;
- (id)defaultBackgroundColor;
- (void)setGroup:;
- (void)viewDidLayoutSubviews;
- (void)setLoadingView:;
- (id)group;
- (void)viewDidLoad;
- (void)setTitleColor:;
- (id)loadingView;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)viewDidDisappear:;
- (id)model;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:;
- (void)setBundleName:;
- (void).cxx_destruct;
- (id)channelName;
- (void)viewDidAppear:;
- (id)fallbackURL;
- (double)startTime;
- (id)containerBackgroundColor;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setFallbackURL:;
- (void)setChannelName:;
- (void)appDidBecomeActive;
- (void)setupNavigationBar;
- (void)setupNotifications;
- (id)navigationBarColor;
- (BOOL)hideStatusBar;
- (void)setHideStatusBar:;
- (id)creativeID;
- (void)setContainerBackgroundColor:;
- (void)updateNavigationTitle;
- (id)cardID;
- (void)setCardID:;
- (void)appWillResignActive;
- (BOOL)showLoading;
@end
