@interface AWEIMGroupImpl.GroupCommandTipViewController : UIViewController
@property (nonatomic) <IESIMCustomModalTransitionContext> transitionContext;
- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:;
- (double)customCornerRadius;
- (void)confirmButtonClickedWithSender:;
- (void)onCloseAction;
- (void)setTransitionContext:;
- (void)viewDidLoad;
- (id)transitionContext;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
