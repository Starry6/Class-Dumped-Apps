@interface BNPlay.BNPlayContainerController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) BOOL etPageIgnored;
@property (nonatomic) UIViewController childViewControllerForStatusBarHidden;
- (BOOL)etPageIgnored;
- (id)childViewControllerForStatusBarHidden;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void)willMoveToParentViewController:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
