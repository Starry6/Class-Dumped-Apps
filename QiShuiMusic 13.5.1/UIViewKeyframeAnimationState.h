@interface UIViewKeyframeAnimationState : UIViewAnimationState
- (void)pop;
- (id)init;
- (id)_createDeferredAnimationForKey:;
- (void)addKeyframeWithRelativeStartTime:relativeDuration:animations:;
- (id)animationForLayer:forKey:forView:;
- (void)setupWithDuration:delay:view:options:factory:parentState:start:completion:;
- (void)cleanupTrackedLayers;
- (void).cxx_destruct;
- (id)_updateAnimationFrameWithAnimationProperties:;
- (BOOL)_isKeyframeAnimation;
@end
