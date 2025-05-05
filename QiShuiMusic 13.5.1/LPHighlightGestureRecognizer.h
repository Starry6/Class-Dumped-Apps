@interface LPHighlightGestureRecognizer : UIGestureRecognizer
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)_locationInWindow;
- (void)startHighlightIfPossible;
- (void)updateHighlight;
- (void)cancelHighlight;
@end
