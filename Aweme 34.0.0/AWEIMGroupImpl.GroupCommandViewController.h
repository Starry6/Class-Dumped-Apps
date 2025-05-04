@interface AWEIMGroupImpl.GroupCommandViewController : UIViewController
@property (nonatomic) <IESIMCustomModalTransitionContext> transitionContext;
- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:;
- (double)customCornerRadius;
- (void)confirmButtonClickedWithSender:;
- (void)onRetryAction;
- (void)onSaveAction;
- (void)onCloseAction;
- (void)onUserDidTakeScreenshot;
- (void)setTransitionContext:;
- (void)viewDidLoad;
- (id)transitionContext;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
