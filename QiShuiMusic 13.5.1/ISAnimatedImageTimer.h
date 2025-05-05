@interface ISAnimatedImageTimer : ISObservable
@property (nonatomic) double timestamp;
- (id)mutableChangeObject;
- (id)init;
- (void)dealloc;
- (void)_updateDisplayLink;
- (void).cxx_destruct;
- (double)timestamp;
- (void)_setTimestamp:;
- (void)hasObserversDidChange;
- (void)_fireTimerWithInterval:;
- (void)_iosInitialization;
- (void)_iosUpdateDisplayLink;
- (void)_iosAnimationTimerFired:;
- (void)_iosDealloc;
+ (id)sharedTimer;
@end
