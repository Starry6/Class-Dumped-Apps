@interface QLPUTimedAnimationGroup : QLPUAnimationGroup
@property (nonatomic) double beginTime;
@property (nonatomic) double currentTime;
- (void)setElapsedTime:;
- (void)_update;
- (id)init;
- (double)beginTime;
- (double)elapsedTime;
- (void)setBeginTime:;
- (void)updateAnimations;
- (double)currentTime;
- (void)pauseAnimations;
- (void)resumeAnimations;
@end
