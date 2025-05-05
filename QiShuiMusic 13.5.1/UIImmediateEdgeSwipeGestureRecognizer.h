@interface UIImmediateEdgeSwipeGestureRecognizer : UIGestureRecognizer
- (void)touchesBegan:withEvent:;
- (void)_processTouches:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
@end
