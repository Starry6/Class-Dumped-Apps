@interface IESECTabKitHybridTabElement : UIViewController
@property (nonatomic) NSString bizTag;
@property (nonatomic) Q cursor;
@property (nonatomic) BOOL firstFetch;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL hasReportMonitor;
@property (nonatomic) q closeClickArea;
@property (nonatomic) IESECTabKitDIContext context;
@property (nonatomic) IESECTabKitTabModel tabModel;
@property (nonatomic) NSMutableArray tabKitBridges;
@property (nonatomic) IESECTabKitHybridModel hybridModel;
@property (nonatomic) IESECTabKitTabPerfInfo tabPerfInfo;
@property (nonatomic) IESECListKitBFFViewController listVC;
@property (nonatomic) IESECTabKitContainerStatusVC statusVC;
@property (nonatomic) IESECListKitCardPreloader lynxCardPreloader;
@property (nonatomic) IESECListKitSharedData sharedData;
@property (nonatomic) IESECServiceProxy<IESECTabKitDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECTabKitMonitorService> monitorService;
@property (nonatomic) IESECServiceProxy<IESECTabKitContainerTrackService> trackService;
@property (nonatomic) IESECServiceProxy<IESECTabKitAbilityService> abilityService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESECTabKitTabElementDelegate> delegate;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) q statusBarStyle;
@property (nonatomic) NSDictionary globalProps;
- (BOOL)hiddenStatusBar;
- (void)registerBridge:;
- (void)registerBridges;
- (void)reportPageVisit;
- (void)setDataService:;
- (void)setGlobalProps:;
- (void)setHybridModel:;
- (void)footerEndRefreshingWithHasMore:;
- (void)reportPageLeave;
- (void)setTabPerfInfo:;
- (id)abilityService;
- (id)bizTag;
- (long long)closeClickArea;
- (void)configBtmTrackerV2;
- (void)configRefreshFooter;
- (void)configRefreshHeaderIfNeeded;
- (void)currentCardsWriteAlogMethodName:paramModel:result:context:;
- (id)customBridges;
- (id)dataService;
- (id)globalProps;
- (void)handleCloseEvent:params:;
- (void)handleContainerDestoryEvent:;
- (BOOL)hasReportMonitor;
- (id)hybridModel;
- (void)initFetchData;
- (BOOL)isRequestOnAir;
- (id)listVC;
- (void)loadMoreData;
- (id)lynxCardPreloader;
- (id)monitorService;
- (void)preloadLynxTemplates;
- (void)reloadWithTabModel:;
- (void)reportMonitor;
- (void)requestData:isRefresh:;
- (void)sendEvent:params:;
- (void)setAbilityService:;
- (void)setBizTag:;
- (void)setCloseClickArea:;
- (void)setHasReportMonitor:;
- (void)setIsRequestOnAir:;
- (void)setListVC:;
- (void)setLynxCardPreloader:;
- (void)setMonitorService:;
- (void)setSharedData:;
- (void)setStatusVC:;
- (void)setTabKitBridges:;
- (void)setTabModel:;
- (void)setTrackService:;
- (id)statusVC;
- (id)tabKitBridges;
- (id)tabModel;
- (id)tabPerfInfo;
- (id)trackEventModelWithEventName:;
- (id)trackService;
- (void)viewVisibilityChange:;
- (unsigned long long)cursor;
- (void)dealloc;
- (long long)statusBarStyle;
- (id)context;
- (void)setDelegate:;
- (void)setCursor:;
- (void)viewDidDisappear:;
- (id)scrollView;
- (id)delegate;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setContext:;
- (id)sharedData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupViews;
- (void)setFirstFetch:;
- (BOOL)firstFetch;
- (id)envIdentifier;
@end
