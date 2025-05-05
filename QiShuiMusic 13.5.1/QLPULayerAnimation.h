@interface QLPULayerAnimation : QLPUAnimationGroup
@property (nonatomic) CAAnimation _animation;
@property (nonatomic) CALayer layer;
@property (nonatomic) NSString key;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationDidStart:;
- (id)initWithLayer:key:;
- (id)init;
- (void)animationDidStop:finished:;
- (id)key;
- (id)layer;
- (id)_animation;
- (void)setSpeed:timeOffset:beginTime:;
- (void)_setAnimation:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isReadyToComplete;
- (void)_updateLayerAnimation;
- (void)finishImmediately;
@end
