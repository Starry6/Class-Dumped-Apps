@interface AWEIMTimerTriggerGestureRecognizer : UIGestureRecognizer
@property (nonatomic) {CGPoint=dd} touchBeginPos;
@property (nonatomic) NSTimer timer;
@property (nonatomic) q sentinel;
@property (nonatomic) @? tiggeredBlock;
- (void)p_stopTimer;
- (void)setTiggeredBlock:;
- (id)tiggeredBlock;
- (void)p_trigger;
- (id)touchBeginPos;
- (void)setTouchBeginPos:;
- (void)setTimer:;
- (id)timer;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (long long)sentinel;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (void)setSentinel:;
@end
