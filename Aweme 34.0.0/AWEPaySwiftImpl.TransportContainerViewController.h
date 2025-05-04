@interface AWEPaySwiftImpl.TransportContainerViewController : UIViewController
@property (nonatomic) q preferredStatusBarStyle;
- (BOOL)configWithRouterParamDict:;
- (void)refreshContainer:;
- (BOOL)canShowDesktopShortcutGuide;
- (id)currentViewController;
- (long long)numberOfControllers:;
- (id)slidingViewController:viewControllerAtIndex:;
- (void)slidingViewController:didSelectIndex:transitionType:;
- (void)didBecomeActive;
- (void)didResignActive;
- (void)transition_didPopDoneTransitionWithContext:;
- (void)dux_backAction;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
