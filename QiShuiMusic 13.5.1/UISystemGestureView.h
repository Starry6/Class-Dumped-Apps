@interface UISystemGestureView : UIView
- (id)_hitTest:withEvent:windowServerHitTestWindow:;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_canChangeFirstResponder:toResponder:;
- (id)_responderSelectionRectForWindow:;
@end
