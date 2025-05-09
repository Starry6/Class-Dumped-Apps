@interface IESECWinContainerVC : UIViewController
@property (nonatomic) IESECWinFeedVC feedVC;
@property (nonatomic) IESECWinNavBarVC navVC;
@property (nonatomic) FBKVOController kvoCtrl;
@property (nonatomic) IESECWinFloatVC floatVC;
@property (nonatomic) UIViewController backVC;
@property (nonatomic) UIViewController liveVC;
@property (nonatomic) IESECWinContainerStatusVC statusVC;
@property (nonatomic) IESECWinDataController dataController;
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECWinLiveService> liveService;
@property (nonatomic) IESECServiceProxy<IESECWinSplitService> splitService;
@property (nonatomic) IESECServiceProxy<IESECWinPageCardService> pageCardService;
@property (nonatomic) IESECServiceProxy<IESECWinComponentService> componentService;
@property (nonatomic) IESECServiceProxy<IESECWinOpportunityService> opportunityService;
@property (nonatomic) IESECServiceProxy<IESECWinCommonTrackService> commonTrackService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)kvoCtrl;
- (void)setDataService:;
- (id)floatVC;
- (id)pageCardService;
- (id)backVC;
- (id)commonTrackService;
- (id)componentService;
- (id)dataService;
- (id)feedVC;
- (id)liveVC;
- (id)navVC;
- (id)opportunityService;
- (void)setBackVC:;
- (void)setCommonTrackService:;
- (void)setComponentService:;
- (void)setDataController:;
- (void)setFeedVC:;
- (void)setFloatVC:;
- (void)setKvoCtrl:;
- (void)setLiveVC:;
- (void)setNavVC:;
- (void)setOpportunityService:;
- (void)setPageCardService:;
- (void)setSplitService:;
- (void)setStatusVC:;
- (id)splitService;
- (id)statusVC;
- (BOOL)ttHideNavigationBar;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (id)initWithParams:;
- (void)viewDidDisappear:;
- (void)didMoveToParentViewController:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)_addObserver;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setupUI;
- (id)dataController;
- (void)setLiveService:;
- (id)liveService;
@end
