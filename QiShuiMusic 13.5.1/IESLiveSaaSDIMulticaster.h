@interface IESLiveSaaSDIMulticaster : NSProxy
- (void)forwardInvocation:direction:;
- (id)initWithTargetProtocol:attachDI:;
- (id)methodSignatureForSelector:direction:;
- (void)p_childForwardInvocation:childDIs:;
- (id)p_getChildMethodSignatureForSelector:childDIs:;
- (id)p_getParentMethodSignatureForSelector:parentDI:;
- (void)p_parentForwardInvocation:parentDI:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (void)addSubscriber:;
- (void)removeSubscriber:;
@end
