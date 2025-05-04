@interface AWEExperienceDelegateProxy : NSProxy
@property (nonatomic) AWEExperienceDelegateProxyFallback fallbackInstance;
@property (nonatomic) @ target;
- (void)changeTarget:;
- (void)redirectToFallback:;
- (id)fallbackInstance;
- (void)setFallbackInstance:;
- (BOOL)isMemberOfClass:;
- (BOOL)isKindOfClass:;
- (id)target;
- (unsigned long long)hash;
- (BOOL)respondsToSelector:;
- (BOOL)conformsToProtocol:;
- (id)initWithTarget:;
- (void)setTarget:;
- (id)description;
- (Class)class;
- (void).cxx_destruct;
- (BOOL)isProxy;
- (void)forwardInvocation:;
- (id)debugDescription;
- (BOOL)isEqual:;
- (id)methodSignatureForSelector:;
- (Class)superclass;
+ (id)proxyWithTarget:;
@end
