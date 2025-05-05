@interface IESLiveGuidancePresentationController : UIPresentationController
@property (nonatomic) UIView dimmingView;
- (id)dimmingView;
- (id)initWithPresentedViewController:presentingViewController:;
- (void)setDimmingView:;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (id)frameOfPresentedViewInContainerView;
- (id)presentationControllerForPresentedViewController:presentingViewController:sourceViewController:;
- (void).cxx_destruct;
- (void)dimmingViewTapped:;
+ (void)showFromViewController:shownViewController:;
@end
