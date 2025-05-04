@interface AWEBaseRootNavigationController : UINavigationController
@property (nonatomic) <AWEBaseRootNavigationControllerDelegate> awe_additionalDelegate;
- (void)setNavigationTransitionFlagAnimated:;
- (void)monitorWithType:fromVC:toVC:;
- (id)awe_additionalDelegate;
- (void)setNavigationPopTransitionFlagAnimated:;
- (void)setAwe_additionalDelegate:;
- (id)initWithRootViewController:;
- (void)setViewControllers:animated:;
- (void)pushViewController:animated:;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:;
- (id)popToRootViewControllerAnimated:;
- (id)popToViewController:animated:;
- (void)setNavigationBarHidden:;
- (void)setNavigationBarHidden:animated:;
@end
