@interface AWEPlayletCenterPageViewController : UIViewController
@property (nonatomic) UIImageView backgroundView;
@property (nonatomic) AWEPlayletCenterPageNaviBarView naviBarView;
@property (nonatomic) AWEPlayletSkylightViewController skyLightViewController;
@property (nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> detailTableViewController;
@property (nonatomic) AWEPlayletChannelDataController dataController;
@property (nonatomic) AWEPlayletPageContext context;
@property (nonatomic) AWEPlayletTracker tracker;
@property (nonatomic) q currentIndex;
@property (nonatomic) BOOL showSkylight;
@property (nonatomic) BOOL canShowSkyLight;
@property (nonatomic) BOOL hasTrackerShow;
@property (nonatomic) BOOL hasTrackerFirstFrame;
@property (nonatomic) AWEPlayletWidgetControl widgetControl;
@property (nonatomic) NSTimer timer;
@property (nonatomic) double initTimeInterval;
@property (nonatomic) double insertLynxDataTimeInterval;
@property (nonatomic) double skyLightReadyTime;
@property (nonatomic) BOOL enterPageOpenSkyLight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (void)player:didChangePlaybackStateWithAction:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (id)aAWEPadModuleAdapter;
- (void)setDataController:;
- (id)naviBarView;
- (id)currentPageName;
- (void)configUI;
- (void)updateSkylightCapsuleView:;
- (id)skyLightViewController;
- (void)setSkyLightViewController:;
- (id)aAWEIncentivePendantDOUYINLiteAdapter;
- (id)detailTableViewController;
- (void)setDetailTableViewController:;
- (void)showSkylight:animated:;
- (double)initTimeInterval;
- (void)setInitTimeInterval:;
- (void)setWidgetControl:;
- (id)widgetControl;
- (void)lynxDataDidFinishFetchWithData:withPullType:;
- (void)loadDataHasFinishedWithPullType:;
- (void)setEnterPageOpenSkyLight:;
- (void)configInsertModel;
- (BOOL)hasTrackerShow;
- (BOOL)showSkylight;
- (void)requestWatchForFreeRight;
- (void)cacheUnusedPlayletModel;
- (BOOL)hasTrackerFirstFrame;
- (void)setHasTrackerFirstFrame:;
- (void)showSkylight:animated:isAutoOpen:;
- (BOOL)canShowSkyLight;
- (void)setShowSkylight:;
- (double)skylightViewTopInset;
- (id)getPublicLogExtra;
- (void)setSkyLightReadyTime:;
- (void)setCanShowSkyLight:;
- (void)setInsertLynxDataTimeInterval:;
- (void)autoOpenSkylight;
- (BOOL)enterPageOpenSkyLight;
- (double)insertLynxDataTimeInterval;
- (double)skyLightReadyTime;
- (void)setHasTrackerShow:;
- (void)openSearchPage;
- (void)lynxViewDidFinishLoadWithContainerHeight:;
- (void)setNaviBarView:;
- (void)viewWillDisappear:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void)setCurrentIndex:;
- (id)tracker;
- (void)startTimer;
- (void)viewDidLoad;
- (void)setBackgroundView:;
- (void)stopTimer;
- (id)backgroundView;
- (void)appWillResignActive:;
- (void)viewDidDisappear:;
- (void)setTracker:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void)appDidBecomeActive:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)context;
- (long long)currentIndex;
- (void)addObservers;
- (id)dataController;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEIncentivePendantDOUYINLiteAdapterClass;
@end
