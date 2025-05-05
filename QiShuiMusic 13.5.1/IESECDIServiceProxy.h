@interface IESECDIServiceProxy : BTDWeakProxy
@property (nonatomic) @ adapter;
- (void)failedAdapter:;
- (BOOL)forwardInvocationToAdapter:;
- (BOOL)selectorIsRequiredIn:selector:;
- (id)signatureForSel:;
- (void)tryToFindAdapter;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (id)adapter;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (void)setAdapter:;
+ (id)strongProxyWithTarget:protocol:;
@end
