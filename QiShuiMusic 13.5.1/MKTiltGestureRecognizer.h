@interface MKTiltGestureRecognizer : UIPanGestureRecognizer
- (void)touchesBegan:withEvent:;
- (id)_activeTouchesForEvent:;
- (void).cxx_destruct;
- (double)_distanceFromPoint:toPoint:;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
@end
