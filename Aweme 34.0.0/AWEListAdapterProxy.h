@interface AWEListAdapterProxy : NSProxy
- (id)initWithCollectionViewTarget:scrollViewTarget:interceptor:;
- (id)forwardingTargetForSelector:;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
@end
