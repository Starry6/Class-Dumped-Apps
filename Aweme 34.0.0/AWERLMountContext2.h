@interface AWERLMountContext2 : NSObject
@property (nonatomic) AWERLViewReusePoolManager viewManager;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) AWERLMountIntrospection2 introspection;
@property (nonatomic) Q transitionType;
@property (nonatomic) <AWERLAnimationProtocol> animation;
- (id)initWithContainerView:offset:;
- (void)setViewManager:;
- (id)introspection;
- (void)setIntrospection:;
- (id)contextWithOffset:;
- (void)setTransitionType:;
- (unsigned long long)transitionType;
- (void)setOffset:;
- (id)offset;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:;
- (id)viewManager;
@end
