@interface AWEDetailFollowShootViewController : AWEDetailFullViewController
@property (nonatomic) BOOL isLoadedAwemeData;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (void)setupInjectServiceOnInit;
- (void)setupUIOnViewDidLoad;
- (void)bindViewModelOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (id)noMoreTipLabel;
- (void)handleAwemeListFetchStateChange;
- (BOOL)isLoadedAwemeData;
- (void)setIsLoadedAwemeData:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)serviceProvider;
+ (Class)aAWEPadModuleAdapterClass;
@end
