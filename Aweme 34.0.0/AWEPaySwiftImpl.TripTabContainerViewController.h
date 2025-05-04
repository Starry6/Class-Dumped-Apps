@interface AWEPaySwiftImpl.TripTabContainerViewController : UIViewController
@property (nonatomic) q preferredStatusBarStyle;
- (BOOL)configWithRouterParamDict:;
- (long long)numberOfControllers:;
- (id)slidingViewController:viewControllerAtIndex:;
- (void)slidingViewController:didSelectIndex:;
- (void)transition_didPopDoneTransitionWithContext:;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
