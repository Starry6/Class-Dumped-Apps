@interface AWELandScapePresentationControllerManager : AWEPresentationControllerManager
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
+ (id)sharedInstance;
@end
