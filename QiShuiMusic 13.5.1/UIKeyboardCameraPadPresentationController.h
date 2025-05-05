@interface UIKeyboardCameraPadPresentationController : UIKeyboardCameraBasePresentationController
@property (nonatomic) <UIDimmingViewDelegate> dimmingViewDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animateTransition:;
- (double)transitionDuration:;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:;
- (void)dismissalTransitionDidEnd:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)dismissalTransitionWillBegin;
- (id)frameOfPresentedViewInContainerView;
- (BOOL)updatesGuideDuringRotation;
- (void).cxx_destruct;
- (int)overrideTextEffectsVisibilityLevelForTransitionView:;
- (void)_animateDismissTransition:;
- (void)_animatePresentTransition:;
- (id)dimmingViewDelegate;
- (void)setDimmingViewDelegate:;
@end
