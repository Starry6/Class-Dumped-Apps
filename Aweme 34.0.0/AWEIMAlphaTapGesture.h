@interface AWEIMAlphaTapGesture : UIGestureRecognizer
- (void)p_executeReverseAnimation;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
- (void)reset;
- (void)touchesMoved:withEvent:;
@end
