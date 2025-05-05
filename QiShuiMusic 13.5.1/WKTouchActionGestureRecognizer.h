@interface WKTouchActionGestureRecognizer : UIGestureRecognizer
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void)setTouchActions:forTouchIdentifier:;
- (void)_updateState;
- (void).cxx_destruct;
- (void)clearTouchActionsForTouchIdentifier:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id).cxx_construct;
- (id)initWithTouchActionDelegate:;
- (void)touchesCancelled:withEvent:;
@end
