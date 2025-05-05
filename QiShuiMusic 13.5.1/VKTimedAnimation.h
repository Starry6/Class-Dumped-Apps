@interface VKTimedAnimation : VKAnimation
@property (nonatomic) @? timingFunction;
@property (nonatomic) @? stepHandler;
- (id)initWithDuration:;
- (void)stopAnimation:;
- (id)init;
- (void)setTimingFunction:;
- (void)setStepHandler:;
- (id)initWithDuration:priority:name:;
- (id)initWithName:;
- (id)stepHandler;
- (void)setDuration:;
- (void)resume;
- (id)timingFunction;
- (void)onTimerFired:;
- (void).cxx_destruct;
- (void)pause;
- (double)duration;
- (id)initWithDuration:name:;
- (BOOL)timed;
+ (id)animationMatchingCurrentAnimationParametersWithName:;
+ (void)setDragCoefficientGetter:;
@end
