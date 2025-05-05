@interface MUIKit.DimmingPresentationController : UIPresentationController
- (void)containerViewWillLayoutSubviews;
- (id)initWithPresentedViewController:presentingViewController:;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionDidEnd:;
- (void)dismissalTransitionWillBegin;
- (void).cxx_destruct;
@end
