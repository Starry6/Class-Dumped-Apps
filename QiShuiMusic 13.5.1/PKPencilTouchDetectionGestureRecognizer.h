@interface PKPencilTouchDetectionGestureRecognizer : UIGestureRecognizer
- (BOOL)_affectedByGesture:;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
- (void)updateTimestampsforTouches:withEvent:;
@end
