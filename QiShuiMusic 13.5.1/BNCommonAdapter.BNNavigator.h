@interface BNCommonAdapter.BNNavigator : NSObject
- (void)navigationController:didShowViewController:animated:;
- (void)navigationController:willShowViewController:animated:;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (id)navigationController:interactionControllerForAnimationController:;
- (void)onPopWithSender:;
- (id)init;
- (void).cxx_destruct;
@end
