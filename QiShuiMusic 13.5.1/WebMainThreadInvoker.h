@interface WebMainThreadInvoker : NSProxy
- (id)initWithTarget:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id).cxx_construct;
- (void)handleException:;
@end
