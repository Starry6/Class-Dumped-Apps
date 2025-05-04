@interface AWEDetailVideoCutTemplateFullViewController : AWEDetailFullViewController
@property (nonatomic) BOOL hasEnteredAwemeDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (void)setupInjectServiceOnInit;
- (void)setupUIOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (BOOL)needAmendEmptyAwemeListTip;
- (void)didEnterAwemeDetailWithIndexPath:;
- (BOOL)hasEnteredAwemeDetail;
- (void)setHasEnteredAwemeDetail:;
- (void)p_updateActionButtonTitle;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)serviceProvider;
+ (Class)aAWEPadModuleAdapterClass;
@end
