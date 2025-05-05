@interface MUIKit.BounceUpPresentationManager : NSObject
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)init;
- (id)animationControllerForDismissedController:;
- (id)presentationControllerForPresentedViewController:presentingViewController:sourceViewController:;
@end
