@interface AWEHorizontalDismissTransition : UIPercentDrivenInteractiveTransition
@property (nonatomic) <UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL interactionInProgress;
@property (nonatomic) BOOL shouldCompleteTransition;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} toFrame;
- (void)wireToViewController:;
- (void)setToFrame:;
- (id)toFrame;
- (void)prepareGestureRecognizerInView:;
- (void)setShouldCompleteTransition:;
- (BOOL)shouldCompleteTransition;
- (void)updateInteractiveTransition:;
- (id)init;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)setTransitionContext:;
- (id)transitionContext;
- (id)viewController;
- (void)startInteractiveTransition:;
- (void).cxx_destruct;
- (void)setViewController:;
- (BOOL)interactionInProgress;
- (void)handlePanGesture:;
- (void)setInteractionInProgress:;
@end
