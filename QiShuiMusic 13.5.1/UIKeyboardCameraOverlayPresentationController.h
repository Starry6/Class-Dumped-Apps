@interface UIKeyboardCameraOverlayPresentationController : UIKeyboardCameraBasePresentationController
- (void)_handlePan:;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:;
- (void)dismissalTransitionDidEnd:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)dismissalTransitionWillBegin;
- (id)frameOfPresentedViewInContainerView;
- (BOOL)updatesGuideDuringRotation;
- (void).cxx_destruct;
- (void)_determinePortraitHeights;
- (void)_installGrabber;
@end
