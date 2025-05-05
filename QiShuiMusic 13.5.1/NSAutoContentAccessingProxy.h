@interface NSAutoContentAccessingProxy : NSProxy
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
+ (id)proxyWithTarget:;
@end
