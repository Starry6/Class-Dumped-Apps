@interface PKPencilObserverGestureRecognizer : UIGestureRecognizer
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)locationInView:;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
@end
