@interface IESECSlidingTabContainerProxy : NSProxy
@property (nonatomic) @ scrollViewTarget;
@property (nonatomic) IESECSlidingTabContainerView interceptor;
- (void)setInterceptor:;
- (id)initWithScrollViewTarget:interceptor:;
- (id)interceptor;
- (id)scrollViewTarget;
- (void)setScrollViewTarget:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
@end
