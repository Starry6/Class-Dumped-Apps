@interface WKMouseGestureRecognizer : UIHoverGestureRecognizer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_hoverCancelled:withEvent:;
- (void)_hoverExited:withEvent:;
- (void)_hoverEntered:withEvent:;
- (void)_hoverMoved:withEvent:;
- (void)touchesBegan:withEvent:;
- (id)takeLastMouseEvent;
- (BOOL)_shouldReceiveTouch:forEvent:recognizerView:;
- (id)locationInView:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)createMouseEventWithType:wasCancelled:;
- (void)reset;
- (id)mouseTouch;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id).cxx_construct;
- (id)lastMouseLocation;
- (void)touchesCancelled:withEvent:;
@end
