@interface AWEDelegateProxy : NSProxy
@property (nonatomic) AWEDelegateProxyFallback fallback;
@property (nonatomic) @ target;
- (void)redirectToDebugger:;
- (void)changeTarget:;
- (BOOL)isMemberOfClass:;
- (id)fallback;
- (BOOL)isKindOfClass:;
- (id)target;
- (unsigned long long)hash;
- (BOOL)respondsToSelector:;
- (BOOL)conformsToProtocol:;
- (id)initWithTarget:;
- (id)description;
- (Class)class;
- (void).cxx_destruct;
- (BOOL)isProxy;
- (void)forwardInvocation:;
- (id)debugDescription;
- (BOOL)isEqual:;
- (void)setFallback:;
- (id)methodSignatureForSelector:;
- (Class)superclass;
+ (id)proxyWithTarget:;
@end
