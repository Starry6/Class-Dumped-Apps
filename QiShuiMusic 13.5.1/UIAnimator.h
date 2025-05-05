@interface UIAnimator : NSObject
- (void)stopAnimation:;
- (id)init;
- (void)dealloc;
- (void)addAnimations:withDuration:start:;
- (void)_startAnimation:withStartTime:;
- (void)_advanceAnimationsOnScreenWithIdentifier:withTimestamp:;
- (void).cxx_destruct;
- (BOOL)_isRunningAnimation:;
- (void)startAnimation:;
- (void)_addAnimation:withDuration:start:startTime:;
- (void)addAnimation:withDuration:start:;
- (void)removeAnimationsForTarget:;
- (void)removeAnimationsForTarget:ofKind:;
+ (id)sharedAnimator;
+ (void)enableAnimation;
+ (void)disableAnimation;
@end
