@interface BNCommonAdapter.BNDraggingDismissTransition : UIPercentDrivenInteractiveTransition
- (void)onPanningWithGestureRecognizer:;
- (id)init;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)startInteractiveTransition:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
@end
