@interface AVUserInteractionObserverGestureRecognizer : UIGestureRecognizer
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void)touchesEstimatedPropertiesUpdated:;
- (BOOL)shouldRequireFailureOfGestureRecognizer:;
- (void)_touchesEndedOrCancelled:;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
@end
