@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer
@property (nonatomic) double startDelay;
@property (nonatomic) double startSnapThreshold;
- (void)stopTimer;
- (void)touchesBegan:withEvent:;
- (void)start;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (double)startDelay;
- (id)freeTransform;
- (id)unscaledFreeTransform;
- (void)resetAndAccumulateTransform;
- (id)rulerTransform;
- (void)setStartDelay:;
- (double)startSnapThreshold;
- (void)setStartSnapThreshold:;
@end
