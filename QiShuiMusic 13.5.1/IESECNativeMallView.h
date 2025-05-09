@interface IESECNativeMallView : UIView
@property (nonatomic) IESECNativeMallWrapperViewController wrapper;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL firstWillAppear;
@property (nonatomic) NSString openTime;
@property (nonatomic) IESECNativeMallViewConfig config;
@property (nonatomic) @? refreshCompletion;
@property (nonatomic) BOOL isReportPageView;
@property (nonatomic) NSTimer stayTimer;
@property (nonatomic) <IESECNativeMallViewDelegate> delegate;
@property (nonatomic) q beginStartTime;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL firstScreenRequestOnAir;
@property (nonatomic) {UIEdgeInsets=dddd} containerInsets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)buildUI;
- (BOOL)firstWillAppear;
- (BOOL)isADEventReportForbidPageChange;
- (void)reportStayTime:;
- (id)adLiveCardTrackerPrefix;
- (long long)beginStartTime;
- (BOOL)canRefresh;
- (void)changeBackgroundColorIfNeeded;
- (unsigned long long)currentThemeStyle;
- (void)endRefreshTimeout;
- (id)enterFrom;
- (id)enterFromMerge;
- (id)extraParamsForMainViewControllerPageSlideReport:;
- (BOOL)firstScreenRequestOnAir;
- (id)fixedEnterFrom;
- (id)globalPropsExtraForMainViewController:;
- (void)handleAppBecomeActive;
- (void)handleStayDuration;
- (id)initWithFrame:config:delegate:;
- (BOOL)isNativeMallVisibleSupport;
- (BOOL)isPullRefreshing;
- (BOOL)isReportPageView;
- (BOOL)isRequestOnAir;
- (BOOL)isViewAppear;
- (void)mainViewConrtroller:finishRefreshMainList:error:;
- (void)mainViewConrtroller:finishRefreshMainList:isCacheData:;
- (void)mainViewConrtroller:mallReport:enterNewPage:;
- (id)mainViewControllerBackgroundDefaultColor:;
- (id)mainViewControllerFeedLynxCardLoadingBackgroundColor:;
- (BOOL)mainViewControllerShouldShowHeaderView:;
- (void)mainViewControllerStartRefreshMainList:;
- (id)mainViewControllerUseCustomHeaderView:;
- (id)makeAllExtraParams;
- (double)mallContainerTopMargin;
- (void)mallDidFirstScreenStraightOut;
- (void)mallReport:enterNewPage:;
- (long long)mallStayDuration;
- (void)manuallyBeginRefreshing;
- (void)noticeThemeChange:;
- (id)openTime;
- (void)pageRefreshWithCompletion:;
- (void)pageReset;
- (id)refreshCompletion;
- (void)removeMainVC;
- (void)reportPageRefresh;
- (void)reportPageView;
- (void)reportStayDuration:;
- (id)rootGlobalPropsExtraForMainViewController:;
- (void)setBeginStartTime:;
- (void)setContainerInsets:;
- (void)setFirstScreenRequestOnAir:;
- (void)setFirstWillAppear:;
- (void)setIsReportPageView:;
- (void)setIsRequestOnAir:;
- (void)setIsViewAppear:;
- (void)setOpenTime:;
- (void)setRefreshCompletion:;
- (void)setStayDurationCountDownTimer;
- (void)setStayTimer:;
- (void)setupNeedlessComponents;
- (id)stayTimer;
- (void)stopStayDurationCountDownTimer;
- (unsigned long long)themeStyleForMainViewController:;
- (void)dealloc;
- (void)setConfig:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)lastScene;
- (void)addObserver;
- (void)viewWillAppear;
- (id)config;
- (void)viewDidAppear;
- (id)wrapper;
- (id)previousPage;
- (id)containerInsets;
- (void)viewDidDisappear;
- (void)handleAppWillResignActive;
- (void)setWrapper:;
- (void)viewWillDisappear;
- (id)pageName;
+ (id)classPageName;
+ (BOOL)enablePreloadNativeMall;
+ (void)preloadNativeMall;
@end
