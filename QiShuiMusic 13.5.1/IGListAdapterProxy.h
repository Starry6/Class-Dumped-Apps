@interface IGListAdapterProxy : NSProxy
- (id)initWithCollectionViewTarget:scrollViewTarget:interceptor:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
@end
