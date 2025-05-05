@interface AVExternalGestureRecognizerPreventer : UIGestureRecognizer
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void)touchesEstimatedPropertiesUpdated:;
- (BOOL)shouldRequireFailureOfGestureRecognizer:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
@end
