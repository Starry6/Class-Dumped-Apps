@interface STShare.ShareSheetPresentationController : UIPresentationController
- (void)containerViewWillLayoutSubviews;
- (id)initWithPresentedViewController:presentingViewController:;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionDidEnd:;
- (void)dismissalTransitionWillBegin;
- (void).cxx_destruct;
@end
