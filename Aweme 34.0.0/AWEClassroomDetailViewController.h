@interface AWEClassroomDetailViewController : UIViewController
@property (nonatomic) q preferredStatusBarStyle;
- (BOOL)configWithRouterParamDict:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (void)scrollViewDidScroll:;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)didBecomeActive;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)didMoveToParentViewController:;
- (void)viewDidLoad;
- (void)willResignActive;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
