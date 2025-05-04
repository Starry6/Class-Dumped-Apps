@interface AWEIMPresentTransitionNavigationController : AWEBaseRootNavigationController
@property (nonatomic) Q slideDirection;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:;
- (unsigned long long)transition_destinatedType;
- (void)setSlideDirection:;
- (unsigned long long)slideDirection;
- (id)nonInteractedPresentTransitionAnimationDuration;
- (unsigned long long)nonInteractedPresentTransitionAnimationOptions;
- (BOOL)shouldRelyOnToVCViewSuperView;
- (id)nonInteractedDismissTransitionAnimationDuration;
- (unsigned long long)nonInteractedDismissTransitionAnimationOptions;
@end
