@interface AWEHalfScreenPresentationController : UIPresentationController
@property (nonatomic) UIView dimmingView;
@property (nonatomic) double customHeightOfPresentedView;
- (double)customHeightOfPresentedView;
- (void)setCustomHeightOfPresentedView:;
- (void)setDimmingView:;
- (id)dimmingView;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)presentationTransitionDidEnd:;
@end
