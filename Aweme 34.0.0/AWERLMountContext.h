@interface AWERLMountContext : NSObject
@property (nonatomic) AWERLViewPoolManager viewManager;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) <AWERLVirtualNodeAnimationProtocol> animator;
@property (nonatomic) AWERLMountIntrospection introspection;
- (void)setViewManager:;
- (id)introspection;
- (void)setIntrospection:;
- (id)initWithContainerView:offset:animator:;
- (id)contextWithOffset:;
- (id)animator;
- (void)setOffset:;
- (id)offset;
- (void)setAnimator:;
- (void).cxx_destruct;
- (id)viewManager;
@end
