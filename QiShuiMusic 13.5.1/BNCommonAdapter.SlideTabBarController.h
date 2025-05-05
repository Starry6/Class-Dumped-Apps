@interface BNCommonAdapter.SlideTabBarController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) BOOL etPageIgnored;
@property (nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)etPageIgnored;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)loadView;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
