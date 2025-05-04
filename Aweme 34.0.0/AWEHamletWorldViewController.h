@interface AWEHamletWorldViewController : UIViewController
@property (nonatomic) BOOL prefersStatusBarHidden;
@property (nonatomic) BOOL prefersHomeIndicatorAutoHidden;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (BOOL)configWithRouterParamDict:;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
- (void)tapAction;
@end
