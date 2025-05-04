@interface AWEDetailDuetFullViewController : AWEDetailFullViewController
@property (nonatomic) BOOL hasAppeared;
- (id)zoomTransitionStartViewForOffset:;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (void)setupInjectServiceOnInit;
- (void)setupUIOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (void)onActionButtonClicked:;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (BOOL)hasAppeared;
- (id)serviceProvider;
- (void)setHasAppeared:;
+ (Class)aAWEPadModuleAdapterClass;
@end
