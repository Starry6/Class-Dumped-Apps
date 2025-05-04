@interface AWESearchScanHistoryBottomPresentationController : UIPresentationController
@property (nonatomic) UIView backgroundView;
- (void)backgroundTapped;
- (id)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:;
- (void)setBackgroundView:;
- (void)presentationTransitionWillBegin;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithPresentedViewController:presentingViewController:;
- (void)dismissalTransitionWillBegin;
@end
