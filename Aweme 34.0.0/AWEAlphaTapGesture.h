@interface AWEAlphaTapGesture : UIGestureRecognizer
- (void)p_executeReverseAnimation;
- (id)initWithTarget:alpha:selector:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
@end
