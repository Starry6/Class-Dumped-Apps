@interface AWEModalPanelTransitionController : AWEPanelTransitionController
@property (nonatomic) double lastOffset;
@property (nonatomic) UIScrollView contentScrollView;
@property (nonatomic) BOOL useSmootherAnimationCurve;
- (void)setUseSmootherAnimationCurve:;
- (BOOL)useSmootherAnimationCurve;
- (void)presentedViewPanned:;
- (id)init;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)contentScrollView;
- (void)animateTransition:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (double)lastOffset;
- (void)setLastOffset:;
- (void)setContentScrollView:;
@end
