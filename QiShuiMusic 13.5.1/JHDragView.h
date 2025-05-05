@interface JHDragView : UIView
- (id)initWithFrame:;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (void)shouldResetFrame;
@end
