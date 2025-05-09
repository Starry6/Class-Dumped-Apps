@interface AWEPanelTransitionController : AWEPanelBaseTransitionController
@property (nonatomic) BOOL dismissingInteractively;
@property (nonatomic) BOOL allowsInteractiveDismissal;
@property (nonatomic) q presentationOrientation;
@property (nonatomic) UIPanGestureRecognizer interactivePanGestureRecognizer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allowsInteractiveDismissal;
- (void)setAllowsInteractiveDismissal:;
- (void)setPresentationOrientation:;
- (long long)presentationOrientation;
- (BOOL)isDismissingInteractively;
- (id)interactivePanGestureRecognizer;
- (id)initialFrameForPresentedViewController:transitionContext:;
- (id)finalFrameForPresentedViewController:transitionContext:;
- (void)beginInteractiveDismissal;
- (void)presentedViewPanned:;
- (id)frameOriginForPresentedViewControllerInContainerView:;
- (void)setDismissingInteractively:;
- (id)init;
- (id)presentationControllerForPresentedViewController:presentingViewController:sourceViewController:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)interactionControllerForDismissal:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (unsigned long long)transitionAnimationOptions:;
+ (Class)presentationControllerClass;
@end
