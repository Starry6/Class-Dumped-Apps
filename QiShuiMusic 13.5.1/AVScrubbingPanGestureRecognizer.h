@interface AVScrubbingPanGestureRecognizer : UIGestureRecognizer
@property (nonatomic) {CGPoint=dd} translation;
@property (nonatomic) {CGPoint=dd} velocity;
- (id)velocity;
- (void)touchesBegan:withEvent:;
- (void)_debugLogGestureIncrements:withPrefix:;
- (void).cxx_destruct;
- (void)reset;
- (id)translation;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
@end
