@interface BNPlay.BNPlayImmerseViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etGroupID;
@property (nonatomic) NSString etGroupType;
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etFromModule;
@property (nonatomic) NSString customSceneName;
@property (nonatomic) _TtC15BNSceneContract20BNPlayImmerseVCParam param;
@property (nonatomic) q preferredStatusBarStyle;
- (id)customSceneName;
- (id)etFromModule;
- (id)etGroupID;
- (id)etGroupType;
- (id)etPageName;
- (id)etSceneName;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (id)param;
- (void)viewWillDisappear:;
- (void)setParam:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
