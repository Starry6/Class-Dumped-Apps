@interface VKCompoundAnimation : VKAnimation
@property (nonatomic) NSMutableArray animations;
@property (nonatomic) @? groupStepHandler;
- (id)animations;
- (void)setRunsForever:;
- (void)stopAnimation:;
- (void)startWithRunner:;
- (BOOL)runsForever;
- (BOOL)running;
- (void)setGroupStepHandler:;
- (void)setDuration:;
- (void)resume;
- (void)onTimerFired:;
- (void).cxx_destruct;
- (id)initWithAnimations:;
- (id)groupStepHandler;
- (void)pause;
- (double)duration;
- (BOOL)timed;
@end
