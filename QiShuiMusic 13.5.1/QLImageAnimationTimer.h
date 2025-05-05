@interface QLImageAnimationTimer : NSObject
@property (nonatomic) NSMutableSet observers;
@property (nonatomic) CADisplayLink displayLink;
- (id)displayLink;
- (void)setDisplayLink:;
- (id)init;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
- (void)animationTimerFired:;
- (void)addAnimationTimerObserver:;
- (void)removeAnimationTimerObserver:;
+ (id)sharedTimer;
@end
