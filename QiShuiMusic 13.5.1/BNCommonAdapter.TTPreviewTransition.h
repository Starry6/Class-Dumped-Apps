@interface BNCommonAdapter.TTPreviewTransition : NSObject
- (void)animateTransition:;
- (double)transitionDuration:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (id)init;
- (void).cxx_destruct;
@end
