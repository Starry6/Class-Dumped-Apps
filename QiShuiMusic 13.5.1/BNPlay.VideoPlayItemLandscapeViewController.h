@interface BNPlay.VideoPlayItemLandscapeViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) BOOL etPageIgnored;
@property (nonatomic) Q supportedInterfaceOrientations;
@property (nonatomic) q preferredInterfaceOrientationForPresentation;
@property (nonatomic) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic) BOOL prefersStatusBarHidden;
- (BOOL)etPageIgnored;
- (id)etPageName;
- (id)etSceneName;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
