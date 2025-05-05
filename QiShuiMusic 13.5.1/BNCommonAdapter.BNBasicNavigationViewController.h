@interface BNCommonAdapter.BNBasicNavigationViewController : UINavigationController
@property (nonatomic) BOOL shouldAutorotate;
@property (nonatomic) Q supportedInterfaceOrientations;
@property (nonatomic) BOOL awe_shouldBypassPresentationHook;
- (void)navigationController:didShowViewController:animated:;
- (void)navigationController:willShowViewController:animated:;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (id)navigationController:interactionControllerForAnimationController:;
- (void)awe_setShouldBypassPresentationHook:;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)pushViewController:animated:;
- (BOOL)shouldAutorotate;
- (id)initWithNavigationBarClass:toolbarClass:;
- (id)initWithRootViewController:;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
