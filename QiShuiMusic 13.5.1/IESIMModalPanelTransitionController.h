@interface IESIMModalPanelTransitionController : IESIMPanelTransitionController
@property (nonatomic) double lastOffset;
@property (nonatomic) UIScrollView contentScrollView;
@property (nonatomic) BOOL useSmootherAnimationCurve;
- (void)presentedViewPanned:;
- (void)setUseSmootherAnimationCurve:;
- (BOOL)useSmootherAnimationCurve;
- (void)animateTransition:;
- (id)init;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)cancelInteractiveTransition;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (double)lastOffset;
- (void)setLastOffset:;
- (void)setContentScrollView:;
@end
