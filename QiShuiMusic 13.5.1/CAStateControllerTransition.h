@interface CAStateControllerTransition : NSObject
@property (nonatomic) CALayer layer;
@property (nonatomic) CAStateTransition transition;
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;
@property (nonatomic) float speed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transition;
- (void)addAnimation:;
- (id)init;
- (double)beginTime;
- (void)dealloc;
- (void)animationDidStop:finished:;
- (id)layer;
- (void)removeAnimationFromLayer:forKey:;
- (float)speed;
- (double)duration;
- (void)invalidate;
@end
