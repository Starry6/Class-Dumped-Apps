@interface ASCModalViewGestureRecognizer : UIGestureRecognizer
@property (nonatomic) NSMutableSet activeTouches;
@property (nonatomic) UIView targetView;
- (void)touchesBegan:withEvent:;
- (id)targetView;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesEnded:withEvent:;
- (id)activeTouches;
- (void)touchesCancelled:withEvent:;
- (id)initWithTargetView:target:action:;
- (BOOL)isAnyTouch:fromEvent:outsideView:;
@end
