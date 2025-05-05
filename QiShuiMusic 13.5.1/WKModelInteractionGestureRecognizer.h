@interface WKModelInteractionGestureRecognizer : UIGestureRecognizer
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
@end
