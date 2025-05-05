@interface CNWeakProxy : NSProxy
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)initWithObject:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (Class)class;
- (id)description;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
+ (id)weakProxyWithObject:;
@end
