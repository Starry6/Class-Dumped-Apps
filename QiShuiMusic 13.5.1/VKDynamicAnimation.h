@interface VKDynamicAnimation : VKAnimation
@property (nonatomic) @? dynamicStepHandler;
- (void)setRunsForever:;
- (void)stopAnimation:;
- (id)init;
- (void)setDynamicStepHandler:;
- (BOOL)runsForever;
- (id)dynamicStepHandler;
- (void)resume;
- (void)onTimerFired:;
- (void).cxx_destruct;
- (void)pause;
@end
