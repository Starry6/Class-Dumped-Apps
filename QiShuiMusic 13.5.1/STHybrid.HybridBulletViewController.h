@interface STHybrid.HybridBulletViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) _TtC15BNSceneContract13HybridVCParam param;
@property (nonatomic) q preferredStatusBarStyle;
- (id)etPageName;
- (id)etSceneName;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didRecieveError:;
- (void)containerWillStartLoading:;
- (void)becomeActive;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)initWithCoder:;
- (void)enterBackground;
- (id)param;
- (void)viewWillDisappear:;
- (void)setParam:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)enterForeground;
- (id)initWithNibName:bundle:;
- (void)resignActive;
- (void)viewDidLoad;
@end
